#include <iostream>
#include <limits.h>

#define MAX_CITIES 10 // Adjust this for the number of cities (avoid large numbers due to factorial growth)
#define INF INT_MAX   // Represent "infinity" for unreachable paths

int cityCount;                         // Number of cities
int distances[MAX_CITIES][MAX_CITIES]; // Distance matrix
bool visited[MAX_CITIES];              // Track visited cities

// Recursive function to calculate the shortest path
int tsp(int position, int count, int cost, int start)
{
    if (count == cityCount && distances[position][start] != INF)
    {
        return cost + distances[position][start]; // Return to the start city
    }

    int answer = INF;
    for (int city = 0; city < cityCount; city++)
    {
        // Proceed if the city is not visited and there's a path
        if (!visited[city] && distances[position][city] != INF)
        {
            visited[city] = true;
            int newCost = tsp(city, count + 1, cost + distances[position][city], start);
            answer = (newCost < answer) ? newCost : answer;
            visited[city] = false;
        }
    }
    return answer;
}

int main()
{
    std::cout << "Enter number of cities: ";
    std::cin >> cityCount;

    // Input distance matrix
    std::cout << "Enter the distance matrix (use " << INF << " for no direct path):\n";
    for (int i = 0; i < cityCount; i++)
    {
        for (int j = 0; j < cityCount; j++)
        {
            std::cin >> distances[i][j];
        }
    }

    // Initialize visited array to false
    for (int i = 0; i < cityCount; i++)
    {
        visited[i] = false;
    }

    // Start the journey from the first city
    visited[0] = true;
    int shortestPath = tsp(0, 1, 0, 0); // Start from city 0

    std::cout << "Minimum travel cost: " << shortestPath << std::endl;
    return 0;
}
