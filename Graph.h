//
// Created by Gengar on 11-Apr-21.
//
#include <algorithm>
#include <vector>

#ifndef GRAPHALGORITHMS_GRAPH_H
#define GRAPHALGORITHMS_GRAPH_H

using namespace std;

struct vertex {
    int identifier;
    int vertexWeight;
    string name;
};

class Graph {
private:
    vector<vector<pair<int, int>>> adjacencyList;
    vector<vertex> vertices;
    vector<int> dfs_nums;

public:
    Graph();

    void addVertex(vertex v);

    void addEdge(vertex v1, vertex v2, int weight = 1);

    void depthFirstSearch(vector<int> &dfs_num, vertex startVertex);


};


#endif //GRAPHALGORITHMS_GRAPH_H
