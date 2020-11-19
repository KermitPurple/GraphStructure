#ifndef GRAPH_H
#define GRAPH_H

#include<utility>
#include<set>
#include<map>


template<class T>
class Graph{ // unweighted, Unordered, graph data structure
private:
    std::map<T, std::set<T>> m; // data in graph; The key corresponds to the vertex; the value is a set of all the vertices that vertex is connected to by edges
public:
    void add_vertex(T const& vertex); // Adds a vertex
    void add_edge(T const& v1, T const& v2); // Adds a connection between two verticies; Does not do anything if one or both of the verticies do not exist in m already
    void DFS(T start); // Depth First Search; go through all of the points and print the path
    void BFS(T start); // breadth first search; go through all of the points and print the path
    void print(); // print each vertex and its connections
};

template class Graph<int>; // declare Graph for int
template class Graph<char>; // declare Graph for char

#endif // GRAPH_H
