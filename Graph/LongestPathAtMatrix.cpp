#include <iostream>
using namespace std;

int neg_inf= -999999;

void initializeMatrix(int** &matrix, int vertices) {
    matrix = new int*[vertices];
    for (int i = 0; i < vertices; i++) {
        matrix[i] = new int[vertices];
        for (int j = 0; j < vertices; j++) {
            matrix[i][j] = 0;
        }
    }
}

void addEdge(int** matrix, int vertices, int i, int j, int weight) {
    if (i >= 0 && i < vertices && j >= 0 && j < vertices) {
        matrix[i][j] = weight;
    }
}

void displayMatrix(int** matrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void longestPath(int** adjMatrix, int vertices, int startVertex) {
    int* distance = new int[vertices];

    for (int i = 0; i < vertices; i++) {
        distance[i] = neg_inf;
    }

    distance[startVertex] = 0;

    for (int i = 1; i <= vertices - 1; i++) {
        for (int u = 0; u < vertices; u++) {
            for (int v = 0; v < vertices;v++) {
                if (adjMatrix[u][v] && distance[u] != neg_inf &&
                    distance[u] + adjMatrix[u][v] > distance[v]) {
                    distance[v] = distance[u] + adjMatrix[u][v];
                }
            }
        }
    }

    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < vertices; i++) {
        cout << i << "\t" << distance[i] << endl;
    }

    delete[] distance;
}

int main() {
    int vertices = 6 + 1;
    int** adjMatrix;

    initializeMatrix(adjMatrix, vertices);

    addEdge(adjMatrix, vertices, 1, 2, 1);
    addEdge(adjMatrix, vertices, 2, 5, 2);
    addEdge(adjMatrix, vertices, 4, 5, 1);
    addEdge(adjMatrix, vertices, 2, 4, 1);
    addEdge(adjMatrix, vertices, 3, 4, 3);
    addEdge(adjMatrix, vertices, 3, 1, 4);
    addEdge(adjMatrix, vertices, 6, 3, 2);
    addEdge(adjMatrix, vertices, 6, 1, 1);

    cout << "Adjacency Matrix of given graph :" << endl;
    displayMatrix(adjMatrix, vertices);

    int startVertex = 1;
    cout << "Longest path from Starting node A :" << endl;
    longestPath(adjMatrix, vertices, startVertex);

    return 0;
}