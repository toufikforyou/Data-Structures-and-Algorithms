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

void bellmanFord(int** &matrix, int vertices, int start){
    int* distance = new int[vertices];
    for(int i = 0; i < vertices; i++){
        distance[i] = INFINITY;
    }
    distance[start] = 0;

    for(int k = 0; k < vertices - 1; k++){
        for(int u = 0; u < vertices; u++){
            for(int v = 0; v < vertices; v++){
                if(matrix[u][v] != 0 && distance[u] != INFINITY && distance[u] + matrix[u][v] < distance[v]){
                    distance[v] = distance[u] + matrix[u][v];
                }
            }
        }
    }

    for(int u = 0; u < vertices; u++){
        for(int v = 0; v < vertices; v++){
            if(matrix[u][v] != 0 && distance[u] != INFINITY && distance[u] + matrix[u][v] < distance[v]){
                return; // used return because its infinite sorted path;
            }
        }
    }

    cout << "Vertex \tDistance" << endl;
    for(int i = 0; i < vertices; i++){
        cout << i << "\t" << distance[i] << endl;
    }
}

void displayMatrix(int** matrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int vertices = 9+1;
    int** graphMatrix;

    initializeMatrix(graphMatrix, vertices);

    addEdge(graphMatrix, vertices, 0, 1, 4);
    addEdge(graphMatrix, vertices, 0, 7, 8);
    addEdge(graphMatrix, vertices, 1, 0, 4);
    addEdge(graphMatrix, vertices, 1, 2, 8);
    addEdge(graphMatrix, vertices, 1, 7, 11);
    addEdge(graphMatrix, vertices, 2, 1, 8);
    addEdge(graphMatrix, vertices, 2, 3, 7);
    addEdge(graphMatrix, vertices, 2, 8, 2);
    addEdge(graphMatrix, vertices, 2, 5, 4);
    addEdge(graphMatrix, vertices, 3, 2, 7);
    addEdge(graphMatrix, vertices, 3, 4, 9);
    addEdge(graphMatrix, vertices, 3, 5, 14);
    addEdge(graphMatrix, vertices, 4, 3, 9);
    addEdge(graphMatrix, vertices, 4, 5, 10);
    addEdge(graphMatrix, vertices, 5, 4, 10);
    addEdge(graphMatrix, vertices, 5, 3, 14);
    addEdge(graphMatrix, vertices, 5, 2, 4);
    addEdge(graphMatrix, vertices, 5, 6, 2);
    addEdge(graphMatrix, vertices, 6, 5, 2);
    addEdge(graphMatrix, vertices, 6, 8, 6);
    addEdge(graphMatrix, vertices, 6, 7, 1);
    addEdge(graphMatrix, vertices, 7, 0, 8);
    addEdge(graphMatrix, vertices, 7, 1, 11);
    addEdge(graphMatrix, vertices, 7, 8, 7);
    addEdge(graphMatrix, vertices, 7, 6, 1);
    addEdge(graphMatrix, vertices, 8, 7, 7);
    addEdge(graphMatrix, vertices, 8, 2, 2);
    addEdge(graphMatrix, vertices, 8, 6, 6);

    cout << "Adjacency Matrix:" << endl;
    displayMatrix(graphMatrix, vertices);

    bellmanFord(graphMatrix, vertices, 1);

    return 0;
}
