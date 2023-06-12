#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Edge {
    int source, destination, weight;
};


struct Subset {
    int parent, rank;
};


bool compareEdges(const Edge& edge1, const Edge& edge2) {
    return edge1.weight < edge2.weight;
}


int find(Subset subsets[], int vertex) {
    if (subsets[vertex].parent != vertex)
        subsets[vertex].parent = find(subsets, subsets[vertex].parent);
    return subsets[vertex].parent;
}


void unionSets(Subset subsets[], int x, int y) {
    int xRoot = find(subsets, x);
    int yRoot = find(subsets, y);
    
    if (subsets[xRoot].rank < subsets[yRoot].rank)
        subsets[xRoot].parent = yRoot;
    else if (subsets[xRoot].rank > subsets[yRoot].rank)
        subsets[yRoot].parent = xRoot;
    else {
        subsets[yRoot].parent = xRoot;
        subsets[xRoot].rank++;
    }
}


void kruskalMST(vector<Edge>& edges, int numVertices) {

    sort(edges.begin(), edges.end(), compareEdges);
    
    vector<Edge> mst; 
    Subset* subsets = new Subset[numVertices];
    
    for (int i = 0; i < numVertices; i++) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }
    
    int edgeCount = 0;
    int index = 0;
    
    while (edgeCount < numVertices - 1 && index < edges.size()) {
        Edge nextEdge = edges[index++];
        int sourceRoot = find(subsets, nextEdge.source);
        int destinationRoot = find(subsets, nextEdge.destination);
        
        if (sourceRoot != destinationRoot) {
            mst.push_back(nextEdge);
            unionSets(subsets, sourceRoot, destinationRoot);
            edgeCount++;
        }
    }
    
    cout << "Minimalne drzewo spinające (Kruskal):" << endl;
    for (const auto& edge : mst) {
        cout << edge.source << " -- " << edge.destination << "  waga: " << edge.weight << endl;
    }
    
    delete[] subsets;
}

int main() {
    int numVertices = 4;
    vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };
    
    kruskalMST(edges, numVertices);
    
    return 0;
}

