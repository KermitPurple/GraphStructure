#ifndef GRAPH_H
#define GRAPH_H

#include<iostream>
#include<utility>
#include<set>


class Graph{
private:
    typedef std::pair<int, int> Edge;
    std::set<int> vertices;
    std::set<Edge> edges;
public:
    void add_vertex(int vertex);
    void add_edge(int v1, int v2);
    Graph();
};

#endif // GRAPH_H
