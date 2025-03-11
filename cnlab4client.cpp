#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345 // Define port number

int main()
{
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[1024] = {0};

    // Create socket (IPv4 + TCP)
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0)
    {
        std::cerr << "Socket creation failed!" << std::endl;
        return -1;
    }

    // Configure server address
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 address from text to binary format
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0)
    {
        std::cerr << "Invalid address!" << std::endl;
        return -1;
    }

    // Connect to the server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        std::cerr << "Connection failed!" << std::endl;
        return -1;
    }

    // Send message to server
    std::string message = "Hello, Server! This is the Client.";
    send(sock, message.c_str(), message.length(), 0);

    // Receive response from server
    read(sock, buffer, 1024);
    std::cout << "Response from server: " << buffer << std::endl;

    // Close the socket
    close(sock);

    return 0;
}
