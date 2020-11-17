#include"Graph.h"

Graph::Graph(){
}

void Graph::add_vertex(int vertex){
    m[vertex] = std::set<int>();
}

void Graph::add_edge(int v1, int v2){
    if(!m.count(v1) || !m.count(v2))
        return;
    m[v1].insert(v2);
    m[v2].insert(v1);
}
