#include"Graph.h"

Graph::Graph(){
}

void Graph::add_vertex(int vertex){
    vertices.insert(vertex);
}

void Graph::add_edge(int v1, int v2){
    if(!vertices.count(v1) || !vertices.count(v2))
        return;
    Edge edge;
    if(v1 < v2)
        edge = {v1, v2};
    else
        edge = {v2, v1};
    edges.insert(edge);
}
