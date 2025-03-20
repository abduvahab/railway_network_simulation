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
    this->network_file = obj.network_file;
    this->train_file = obj.train_file;
    return *this;
}

void LoadFile::loadNetWorkFile(){
    std::cout<<"1"<<std::endl;
    std::ifstream netFile(network_file.c_str());
    std::cout<<"error before:"<<network_file<<std::endl;
    if(netFile.is_open()){
        std::cout<<"network file is open"<<std::endl;
    }
    else{
        throw LoadFile::LoadFileError("error in reading network file, check the network file!");
    }
}
void LoadFile::loadTrainFile(){
    
}