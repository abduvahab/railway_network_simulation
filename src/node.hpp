#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <vector>

class Node{
    
    private:
    std::string name;
    std::vector<std::pair<Node*, double> > connections;

    public:
        Node(const std::string name):name(name), connections(){}
        Node(const Node& node);
        Node& operator=(const Node& node);

        const std::string getName();
        void setName(const std::string& name);
        void addNode(Node* node, double len);
        void removeNode(Node* node);
        void showConnection();

};


#endif