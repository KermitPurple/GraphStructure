#include<iostream>
#include"Graph.h"

int main(){
    Graph<int> gi;
    gi.add_vertex(1);
    gi.add_vertex(2);
    gi.add_vertex(3);
    gi.add_vertex(4);
    gi.add_vertex(5);
    gi.add_vertex(6);
    gi.add_edge(1, 2);
    gi.add_edge(2, 3);
    gi.add_edge(3, 4);
    gi.add_edge(1, 4);
    gi.add_edge(3, 5);
    gi.add_edge(4, 5);
    gi.add_edge(5, 6);
    gi.print();
    gi.DFS(1);
    std::cout << "\n";
    gi.BFS(1);
    std::cout << "\n";
    Graph<char> gc;
    gc.add_vertex('A');
    gc.add_vertex('B');
    gc.add_vertex('C');
    gc.add_vertex('D');
    gc.add_vertex('E');
    gc.add_vertex('F');
    gc.add_edge('A', 'B');
    gc.add_edge('B', 'C');
    gc.add_edge('C', 'D');
    gc.add_edge('A', 'D');
    gc.add_edge('C', 'E');
    gc.add_edge('D', 'E');
    gc.add_edge('E', 'F');
    gc.print();
    gc.DFS('A');
    std::cout << "\n";
    gc.BFS('A');
    std::cout << "\n";
    return 0;
}
