#ifndef RAILNETWORK_HPP
#define RAILNETWORK_HPP

#include <iostream>
#include <map>
#include "node.hpp"
#include "rail.hpp"


class RailNetWork{

    private:
        std::map<std::string, Node*>    nodes;
        std::vector<Rail*>              rails;

    public:
        RailNetWork():nodes(),rails(){}
        RailNetWork(const RailNetWork& railNetwork);
        RailNetWork& operator=(const RailNetWork& railNetWork);

        

    
};


#endif