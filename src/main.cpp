#include<iostream>
#include"Graph.h"

int main(){
    Graph g;
    g.add_vertex(1);
    g.add_vertex(2);
    g.add_vertex(3);
    g.add_vertex(4);
    g.add_vertex(5);
    g.add_vertex(6);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(1, 4);
    g.add_edge(3, 5);
    g.add_edge(4, 5);
    g.add_edge(5, 6);
    g.print();
    g.DFS(1);
    std::cout << "\n\n";
    g.BFS(1);
    return 0;
}
