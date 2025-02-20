#include "node.hpp"


Node::Node(const Node& node){
    *this = node;
}

Node& Node::operator=(const Node& node){
    if (this == &node){
        return *this;
    }
    this->name = node.name;
    this->connections = node.connections;
    return *this;
}

const std::string Node::getName(){
    return name;
}

void Node::setName(const std::string& name){
    this->name = name;
}

void Node::addNode(Node* node, double len){
    std::vector<std::pair<Node*, double> >::iterator it;
    for(it = connections.begin(); it != connections.end(); it++){
        if (it->first == node){
            return;
        }
    }
    if(it == connections.end()){
        connections.push_back(std::pair<Node*, double>(node, len));
    }
}

void Node::removeNode(Node* node){
    std::vector<std::pair<Node*, double> >::iterator it;
    for(it = connections.begin(); it != connections.end(); it++){
        if(it->first == node){
            connections.erase(it);
            return;
        }
    }

}

void Node::showConnection(){
    std::vector<std::pair<Node*, double> >::iterator it;
    for (it = connections.begin(); it !=connections.end();it++){
        std::cout<<"the nodes connected with "<<name<<" are:"<<std::endl;
        std::cout<<(it->first->getName())<<"--"<<it->second<<std::endl;
    }
}

