#ifndef GRAPH_H
#define GRAPH_H

#include<utility>
#include<list>


class Graph{
private:
    typedef std::pair<int, int> Edge;
    std::list<int> Vertices;
    std::list<int> Edges;
public:
    Graph();
};

#endif // GRAPH_H
