#ifndef  RAIL_HPP
#define RAIL_HPP

#include <iostream>
#include "node.hpp"

class Rail{

    private:
        Node* startNode;
        Node* endNode;
        double length;
        double speedLimit;
    
    public:
        Rail(Node* start, Node* end, double len, double limit){
            startNode = start;
            endNode = end;
            length = len;
            speedLimit = limit;
        }
        void setLength(double len){
            length = len;
        }
        double getLength(){
            return length;
        }
        void setSpeedLimit(double limit){
            speedLimit = limit;
        }
        double getSpeedLimit(){
            return speedLimit;
        }
        Node* getStartNode(){
            return startNode;
        }
        void setStartNode(Node* node){
            startNode = node;
        }
        Node* getEndNode(){
            return endNode;
        }
        void setEndNode(Node* node){
            endNode = node;
        }

    };




#endif