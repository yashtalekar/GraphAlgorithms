//
// Created by Gengar on 11-Apr-21.
//

#include "Graph.h"
using namespace std;

#define DFS_WHITE -1
#define DFS_BLACK 1
#define DFS_GRAY 2

Graph::Graph() {

}

void Graph::addVertex(vertex v) {
    vertices.push_back(v);
    // assign blank vectors of pair<int, int>s to AdjList
    adjacencyList.assign(vertices.size(), vector<pair<int, int>>());
    dfs_nums.assign(vertices.size(), DFS_WHITE);
}

void Graph::addEdge(vertex v1, vertex v2, int weight) {
    adjacencyList[v1.identifier].push_back(pair<int, int>(v2.identifier, weight));
    
}

void Graph::depthFirstSearch(vector<int> &dfs_num, vertex startVertex) {
    dfs_nums[startVertex.identifier] = DFS_BLACK;
}