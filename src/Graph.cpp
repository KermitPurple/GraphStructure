#include<iostream>
#include<stack>
#include<queue>
#include"Graph.h"

template<class T>
void Graph<T>::add_vertex(T const& vertex){ // adds a vertex
    m.insert(make_pair(vertex, std::set<T>())); // add the new vertex into the map with a blank set as its value
}

template<class T>
void Graph<T>::add_edge(T const& v1, T const& v2){ // add a connection between two verticies
    if(!m.count(v1) || !m.count(v2)) // if either of the vertices doesn't exist
        return; // exit function
    m[v1].insert(v2); // add v2 to v1's set
    m[v2].insert(v1); // add v1 to v2's set
}

template<class T>
void Graph<T>::DFS(T start){ // Depth First Search
    std::cout << start; // print start
    std::set<T> visited; // set of all visited vertices
    std::stack<T> s; // stack to store previous moves
    while(1){ // loop
        if(visited.insert(start).second) // insert and if inserts
            s.push(start); // push value to stack
        bool moved = false; // if the vertex has moved
        for(auto i:m[start]) // cycle through start's set
            if(!visited.count(i)){ // if i isn't in visited
                start = i; // set start to new i
                std::cout << ", " << start; // print new value
                moved = true; // set moved to true
                break; // exit for loop
            }
        if(!moved){ // if vertex hasn't moved
            start = s.top(); // get the top value of the stack
            s.pop(); // remove the top value of the stack
            if(s.empty()) // if stack is empty
                break; // exit
        }
    }
}

template<class T>
void Graph<T>::BFS(T start){ // Depth First Search
    std::cout << start; // print start
    std::set<T> visited = {start}; // set of all visited vertices
    std::queue<T> q; // stack to store previous moves
    while(1){ // loop
        for(auto i:m[start]) // cycle through start's set
            if(visited.insert(i).second) // insert and if inserts
                q.push(i); // push to queue
        if(q.empty()) // if the queue is empty
            break; // exit loop
        start = q.front(); // get the front value
        std::cout << ", " << start; // print a comma and the new start
        q.pop(); // remove the front value
    }
}

template<class T>
void Graph<T>::print(){
    for(auto i:m){
        std::cout << i.first << ": ";
        for(auto j: i.second)
            std::cout << j << " ";
        std::cout << std::endl;
    }
}
