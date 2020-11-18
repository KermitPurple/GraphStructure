#include<iostream>
#include<stack>
#include"Graph.h"

void Graph::add_vertex(int vertex){ // adds a vertex
    m[vertex] = std::set<int>(); // set vertex to be new set
}

void Graph::add_edge(int v1, int v2){ // add a connection between two verticies
    if(!m.count(v1) || !m.count(v2)) // if either of the vertices doesn't exist
        return; // exit function
    m[v1].insert(v2); // add v2 to v1's set
    m[v2].insert(v1); // add v1 to v2's set
}

void Graph::DFS(int start){ // Depth First Search
    std::cout << start; // print start
    std::set<int> visited; // set of all visited vertices
    std::stack<int> s; // stack to store previous moves
    while(1){ // loop
        if(visited.insert(start).second) // insert and if inserts
            s.push(start); // push value to stack
        bool moved = false; // if the vertex has moved
        for(auto i:m[start]){ // cycle through start's set
            if(!visited.count(i)){ // if i is in visited
                start = i; // set start to new i
                std::cout << ", " << start; // print new value
                moved = true; // set moved to true
                break; // exit for loop
            }
        }
        if(!moved){ // if vertex hasn't moved
            start = s.top(); // get the top value of the stack
            s.pop(); // remove the top value of the stack
            if(s.empty()) // if stack is empty
                break; // exit
        }
    }
}
