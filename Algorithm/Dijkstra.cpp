#include<iostream>

using namespace std;

const int INFINITY = 1e9;

void initializeMatrix(int** &matrix, int vertices){
    matrix = new int*[vertices];
    for(int i = 0; i < vertices; i++){
        matrix[i] = new int[vertices];
        for(int j = 0; j < vertices; j++){
            matrix[i][j] = 0;
        }
    }
}

void addEdge(int** &matrix, int vertices, int i, int j, int weight){
    if(i >= 0 && i < vertices && j >= 0 && j < vertices){
        matrix[i][j] = weight;
    }
}

void dijkstra(int** &matrix, int vertices, int start){
    int* distance = new int[vertices];
    bool* visited = new bool[vertices];

    for(int i = 0; i < vertices; i++){
        distance[i] = INFINITY;
        visited[i] = false;
    }

    distance[start] = 0;

    for(int i = 0; i < vertices - 1; i++){
        int minDistance = INFINITY;
        int minIndex = -1;

        for(int v = 0; v < vertices; v++){
            if(!visited[v] && distance[v] <= minDistance){
                minDistance = distance[v];
                minIndex = v;
            }
        }

        int u = minIndex;
        visited[u] = true;

        for(int v = 0; v < vertices; v++){
            if(!visited[v] && matrix[u][v] && distance[u] != INFINITY && distance[u] + matrix[u][v] < distance[v]){
                distance[v] = distance[u] + matrix[u][v];
            }
        }
    }

    for(int i = 1; i < vertices; i++){
        cout << i << " " << visited[i];
    }
}

void displayMatrix(int** matrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int vertices = 6+1;
    int** graphMatrix;

    initializeMatrix(graphMatrix, vertices);

    // Add edges
    addEdge(graphMatrix, vertices, 1, 2, 2);
    addEdge(graphMatrix, vertices, 1, 3, 4);
    addEdge(graphMatrix, vertices, 2, 3, 1);
    addEdge(graphMatrix, vertices, 3, 5, 3);
    addEdge(graphMatrix, vertices, 4, 6, 1);
    addEdge(graphMatrix, vertices, 5, 4, 2);
    addEdge(graphMatrix, vertices, 5, 6, 5);


        // Display the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    displayMatrix(graphMatrix, vertices);

    dijkstra(graphMatrix, vertices, 1);

    displayMatrix(graphMatrix, vertices);


    return 0;
}