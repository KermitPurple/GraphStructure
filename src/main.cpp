#include<iostream>
#include"Graph.h"

void print_map(std::map<int, std::set<int>>& m){
    for(auto i:m){
        std::cout << i.first << ": ";
        for(auto j: i.second)
            std::cout << j << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main(){
    Graph g;
    g.add_vertex(1);
    g.add_vertex(2);
    g.add_vertex(3);
    g.add_vertex(4);
    g.add_vertex(5);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(1, 4);
    g.add_edge(3, 5);
    g.add_edge(4, 5);
    print_map(g.m);
    g.DFS(1);
    return 0;
}
