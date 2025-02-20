#include <string>
#include <iostream>
#include "./src/node.hpp"
#include "./src/rail.hpp"

int main(){

    Node node = Node("mulhouse");
    std::cout << "ok"<<std::endl;
    std::cout << node.getName()<<std::endl;
    node.setName("illzach");
    Node  strasbourg = Node("strasbourg");
    strasbourg.addNode(&node, 100);
    strasbourg.showConnection();
    Node c_node = strasbourg;
    c_node.showConnection();
    strasbourg.addNode(&node, 100);
    strasbourg.removeNode(&node);
    strasbourg.showConnection();
    Rail ms = Rail(&node, &strasbourg, 100.0, 120.0);
    std::cout<<ms.getStartNode()->getName()<<std::endl;
    std::cout<<ms.getEndNode()->getName()<<std::endl;
    return 0;
}