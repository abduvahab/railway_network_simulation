#include "railNetWork.hpp"

RailNetWork::RailNetWork(const RailNetWork& obj){
    *this = obj;
}

RailNetWork& RailNetWork::operator=(const RailNetWork& obj){
    if (this == &obj){
        return *this;
    }
    this->nodes = obj.nodes;
    this->rails = obj.rails;
    return *this;
}




