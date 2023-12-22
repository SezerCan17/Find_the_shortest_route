//#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <unordered_map>



using  namespace std;
class Graph {

    public:
        Graph(int V);
        Graph(std::istream& in);

        bool adjacent(int x, int y);
        vector<int> neighbors(int x);
        void add_vertex(int x);
        void remove_vertex(int x);
        void add_edge(int x, int y);
        void remove_edge(int x, int y);
        int get_vertex_value(int x);
        void set_vertex_value(int x, int v);
        int V();
        int E();
        string toString();
        int et_edge_value(int x, int y);
        void set_edge_value(int x, int y, int v);

    private:
        int V_;
        int E_;
        vector<int>adj;

           

        
};

