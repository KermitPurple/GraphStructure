#include<iostream>
#include<stack>
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

void Graph::DFS(int start){
    std::cout << start;
    std::set<int> visited;
    std::stack<int> s;
    while(1){
        if(visited.insert(start).second) // insert and if inserts
            s.push(start);
        bool moved = false;
        for(auto i:m[start]){
            if(!visited.count(i)){ // if i is in visited
                start = i;
                std::cout << ", " << start;
                moved = true;
                break;
            }
        }
        if(!moved){
            start = s.top();
            s.pop();
            if(s.empty())
                break;
        }
    }
}
