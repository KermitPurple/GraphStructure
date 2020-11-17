#ifndef GRAPH_H
#define GRAPH_H

#include<utility>
#include<set>
#include<map>


class Graph{
private:
public:
    std::map<int, std::set<int>> m;
    void add_vertex(int vertex);
    void add_edge(int v1, int v2);
    Graph();
};

#endif // GRAPH_H
