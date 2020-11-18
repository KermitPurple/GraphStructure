#ifndef GRAPH_H
#define GRAPH_H

#include<utility>
#include<set>
#include<map>


class Graph{ // unweighted, Unordered, graph data structure
private:
    std::map<int, std::set<int>> m; // data in graph; The key corresponds to the vertex; the value is a set of all the vertices that vertex is connected to by edges
public:
    void add_vertex(int vertex); // Adds a vertex
    void add_edge(int v1, int v2); // Adds a connection between two verticies; Does not do anything if one or both of the verticies do not exist in m already
    void DFS(int start); // Depth First Search; go through all of the points and print the path
    void print(); // print each vertex and its connections
};

#endif // GRAPH_H
