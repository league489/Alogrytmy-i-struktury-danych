#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;


struct Edge {
    int source, destination, weight;
};


class Graph {
private:
    int numVertices;
    vector<vector<Edge>> adjacencyList;

public:
    Graph(int V) : numVertices(V), adjacencyList(V) {}

    
    void addEdge(int source, int destination, int weight) {
        Edge edge;
        edge.source = source;
        edge.destination = destination;
        edge.weight = weight;
        adjacencyList[source].push_back(edge);

      
        Edge reverseEdge;
        reverseEdge.source = destination;
        reverseEdge.destination = source;
        reverseEdge.weight = weight;
        adjacencyList[destination].push_back(reverseEdge);
    }

   
    void primMST() {
        vector<int> parent(numVertices, -1); 
        vector<int> key(numVertices, INT_MAX); 
        vector<bool> inMST(numVertices, false); 
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int startVertex = 0; 
        pq.push(make_pair(0, startVertex));
        key[startVertex] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            inMST[u] = true;

  
            for (const auto& edge : adjacencyList[u]) {
                int v = edge.destination;
                int weight = edge.weight;

           
                if (!inMST[v] && weight < key[v]) {
                    parent[v] = u;
                    key[v] = weight;
                    pq.push(make_pair(key[v], v));
                }
            }
        }

        cout << "Minimalne drzewo spinające (Prima):" << endl;
        for (int i = 1; i < numVertices; i++) {
            cout << parent[i] << " -- " << i << "  waga: " << key[i] << endl;
        }
    }
};

int main() {
 
    int numVertices = 4;
    Graph graph(numVertices);

    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    graph.primMST();

    return 0;
}

