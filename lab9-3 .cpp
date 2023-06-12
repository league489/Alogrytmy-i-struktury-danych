#include <iostream>
#include <vector>

using namespace std;


void displayAdjacencyMatrix(const vector<vector<int>>& adjacencyMatrix) {
    cout << "Macierz sąsiedztwa:" << endl;

    for (const auto& row : adjacencyMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void displayAdjacencyList(const vector<vector<int>>& adjacencyList) {
    cout << "Lista sąsiedztwa:" << endl;

    for (int i = 0; i < adjacencyList.size(); i++) {
        cout << "Wierzchołek " << i << ": ";
        for (int val : adjacencyList[i]) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void displayGraphVisualization(const vector<vector<int>>& adjacencyList) {
    cout << "Interpretacja graficzna:" << endl;

    for (int i = 0; i < adjacencyList.size(); i++) {
        cout << i << " -> ";
        for (int val : adjacencyList[i]) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int numVertices;
    int numEdges;
    int option;

    cout << "Witaj! Jakiego grafu chcesz zbudować?" << endl;
    cout << "1. Skierowany" << endl;
    cout << "2. Nieskierowany" << endl;
    cout << "3. Ważony" << endl;
    cout << "Wybierz opcję: ";
    cin >> option;

    cout << "Podaj liczbę wierzchołków: ";
    cin >> numVertices;

    cout << "Podaj liczbę połączeń: ";
    cin >> numEdges;

    
    vector<vector<int>> adjacencyMatrix(numVertices, vector<int>(numVertices, 0));
    vector<vector<int>> adjacencyList(numVertices);

    cout << "Podaj połączenia pomiędzy wierzchołkami (indeksowane od 0):" << endl;
    for (int i = 0; i < numEdges; i++) {
        int source, destination;
        cout << "Połączenie " << i + 1 << ":" << endl;
        cout << "Wierzchołek źródłowy: ";
        cin >> source;
        cout << "Wierzchołek docelowy: ";
        cin >> destination;

        
        adjacencyMatrix[source][destination] = 1;

       
        adjacencyList[source].push_back(destination);

        if (option == 2) {
           
            adjacencyMatrix[destination][source] = 1;
            adjacencyList[destination].push_back(source);
        }
    }

    
    cout << endl;
    displayAdjacencyMatrix(adjacencyMatrix);
    displayAdjacencyList(adjacencyList);
    displayGraphVisualization(adjacencyList);

    return 0;
}
