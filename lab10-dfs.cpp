#include <iostream>
#include <vector>
#include <queue>

using namespace std;


class Graph {
private:
    int numVertices;
    vector<vector<int>> adjacencyList;

public:
    Graph(int V) : numVertices(V), adjacencyList(V) {}

    
    void addEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
        
        adjacencyList[destination].push_back(source);
    }

    
    void DFS(int startVertex) {
        vector<bool> visited(numVertices, false); 
        queue<int> q; 
        q.push(startVertex); 

        while (!q.empty()) {
            int vertex = q.front();
            q.pop();

            if (!visited[vertex]) {
                visited[vertex] = true;
                cout << vertex << " ";

                
                for (int neighbor : adjacencyList[vertex]) {
                    if (!visited[neighbor]) {
                        q.push(neighbor);
                    }
                }
            }
        }
    }
};

int main() {
   
    int numVertices = 6;
    Graph graph(numVertices);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);

    cout << "Przeszukiwanie grafu metodą DFS: ";
    graph.DFS(0);

    return 0;
}

