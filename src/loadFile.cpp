#include "loadFile.hpp"

LoadFile::LoadFile(const LoadFile& obj){
    *this = obj; 
}

LoadFile& LoadFile::operator=(const LoadFile& obj){
    if (this == & obj){
        return *this;
    }
    this->nodes = obj.nodes;
    this->rails = obj.rails;
    return *this;
}

void LoadFile::loadNetWorkFile(){

}
void LoadFile::loadTrainFile(){
    
}