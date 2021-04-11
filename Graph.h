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
    vector<pair<vertex, int>> adjacencyList;
};


#endif //GRAPHALGORITHMS_GRAPH_H
