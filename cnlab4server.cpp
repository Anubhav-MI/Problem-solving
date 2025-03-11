#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345 // Define port number

int main()
{
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};

    // Create socket (IPv4 + TCP)
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0)
    {
        std::cerr << "Socket creation failed!" << std::endl;
        return -1;
    }

    // Configure server address
    address.sin_family = AF_INET;         // IPv4
    address.sin_addr.s_addr = INADDR_ANY; // Listen on all available interfaces
    address.sin_port = htons(PORT);       // Convert to network byte order

    // Bind socket to IP and port
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
    {
        std::cerr << "Binding failed!" << std::endl;
        return -1;
    }

    // Listen for incoming connections
    if (listen(server_fd, 3) < 0)
    {
        std::cerr << "Listening failed!" << std::endl;
        return -1;
    }

    std::cout << "Server listening on port " << PORT << "..." << std::endl;

    // Accept a client connection
    new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);
    if (new_socket < 0)
    {
        std::cerr << "Accept failed!" << std::endl;
        return -1;
    }

    // Receive message from client
    read(new_socket, buffer, 1024);
    std::cout << "Received from client: " << buffer << std::endl;

    // Send response back to client
    std::string response = "Message received successfully!";
    send(new_socket, response.c_str(), response.length(), 0);

    // Close sockets
    close(new_socket);
    close(server_fd);

    return 0;
}
