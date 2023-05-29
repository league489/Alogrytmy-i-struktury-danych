#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int num_vertices;
    vector<vector<int>> adj_matrix;

public:
    Graph(int num_vertices) : num_vertices(num_vertices), adj_matrix(num_vertices, vector<int>(num_vertices, 0)) {}

    void add_edge(int source, int destination, int weight = 1) {
        adj_matrix[source][destination] = weight;
        adj_matrix[destination][source] = weight;
    }

    void display_matrix_and_list() {
        cout << "Macierz sąsiedztwa:" << endl;
        for (const auto& row : adj_matrix) {
            for (int value : row) {
                cout << value << " ";
            }
            cout << endl;
        }

        cout << "\nLista sąsiedztwa:" << endl;
        for (int vertex = 0; vertex < num_vertices; ++vertex) {
            cout << vertex << ": ";
            bool has_neighbors = false;
            for (int neighbor = 0; neighbor < num_vertices; ++neighbor) {
                if (adj_matrix[vertex][neighbor] != 0) {
                    cout << neighbor << " ";
                    has_neighbors = true;
                }
            }
            if (!has_neighbors) {
                cout << "brak sąsiadów";
            }
            cout << endl;
        }
    }

    void display_graph() {
        cout << "\nInterpretacja graficzna:" << endl;
        for (int row = 0; row < num_vertices; ++row) {
            for (int col = 0; col < num_vertices; ++col) {
                int weight = adj_matrix[row][col];
                if (weight != 0) {
                    cout << row << " " << (weight == 1 ? "-" : "->") << " " << col << " (waga: " << weight << ")" << endl;
                }
            }
        }
    }
};

void create_graph() {
    int num_vertices;
    cout << "Podaj liczbę wierzchołków: ";
    cin >> num_vertices;

    Graph graph(num_vertices);

    while (true) {
        cout << "\nCo chcesz zrobić?" << endl;
        cout << "1. Dodaj krawędź" << endl;
        cout << "2. Wyświetl macierz i listę sąsiedztwa" << endl;
        cout << "3. Wyświetl interpretację graficzną" << endl;
        cout << "4. Zakończ program" << endl;

        int choice;
        cout << "Twój wybór: ";
        cin >> choice;

        if (choice == 1) {
            int source, destination, weight;
            cout << "Podaj wierzchołek początkowy: ";
            cin >> source;
            cout << "Podaj wierzchołek końcowy: ";
            cin >> destination;
            cout << "Podaj wagę krawędzi (domyślnie 1): ";
            cin >> weight;
            graph.add_edge(source, destination, weight);
        }
        else if (choice == 2) {
            graph.display_matrix_and_list();
        }
        else if (choice == 3) {
            graph.display_graph();
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Nieprawidłowy wybór. Spróbuj ponownie." << endl;
        }
    }
}

int main() {
    create_graph();
    return 0;
}

