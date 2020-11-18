#include<iostream>
#include<stack>
#include<queue>
#include"Graph.h"

#define LOG(X) std::cout << X;

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
            if(!visited.count(i)){ // if i isn't in visited
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

void Graph::BFS(int start){ // Depth First Search
    std::cout << start; // print start
    std::set<int> visited = {start}; // set of all visited vertices
    std::queue<int> q; // stack to store previous moves
    while(1){ // loop
        for(auto i:m[start]){ // cycle through start's set
            if(visited.insert(i).second) // insert and if inserts
                q.push(i); // push to queue
        }
        if(q.empty()) // if the queue is empty
            break; // exit loop
        start = q.front(); // get the front value
        std::cout << ", " << start; // print a comma and the new start
        q.pop(); // remove the front value
    }
}


void Graph::print(){
    for(auto i:m){
        std::cout << i.first << ": ";
        for(auto j: i.second)
            std::cout << j << " ";
        std::cout << std::endl;
    }
}
