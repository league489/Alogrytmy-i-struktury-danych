#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;


class Graph {
private:
    int numVertices;
    vector<vector<pii>> adjacencyList;

public:
    Graph(int V) : numVertices(V), adjacencyList(V) {}

    
    void addEdge(int source, int destination, int weight) {
        adjacencyList[source].push_back(make_pair(destination, weight));
        
        adjacencyList[destination].push_back(make_pair(source, weight));
    }

   
    vector<int> dijkstra(int startVertex) {
        
        vector<int> distance(numVertices, INT_MAX);
        distance[startVertex] = 0;

        
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        pq.push(make_pair(0, startVertex));

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            
            for (auto edge : adjacencyList[u]) {
                int v = edge.first;
                int weight = edge.second;

               
                if (distance[u] + weight < distance[v]) {
                    distance[v] = distance[u] + weight;
                    pq.push(make_pair(distance[v], v));
                }
            }
        }

        return distance;
    }
};

int main() {
  
    int numVertices = 6;
    Graph graph(numVertices);

    graph.addEdge(0, 1, 5);
    graph.addEdge(0, 2, 3);
    graph.addEdge(1, 3, 6);
    graph.addEdge(1, 4, 2);
    graph.addEdge(2, 4, 7);
    graph.addEdge(3, 4, 4);
    graph.addEdge(3, 5, 2);
    graph.addEdge(4, 5, 1);

    int startVertex = 0;
    vector<int> shortestDistances = graph.dijkstra(startVertex);

    cout << "Najkrótsze drogi z wierzchołka " << startVertex << ":" << endl;
    for (int i = 0; i < numVertices; i++) {
        cout << "Do wierzchołka " << i << ": " << shortestDistances[i] << endl;
    }

    return 0;
}