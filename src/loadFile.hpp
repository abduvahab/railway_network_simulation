#ifndef LOADFILE_HPP
#define LOADFILE_HPP

#include <iostream>
#include <set>
#include <vector>


struct RailInfo{
    std::string beginNode;
    std::string endNode;
    double      distance;
    double      speedLimite;
};

class LoadFile{

    private:
        std::set<std::string>   nodes;
        std::vector<RailInfo>       rails;        

    public:
        LoadFile():nodes(),rails(){}
        LoadFile(const LoadFile& obj);
        LoadFile& operator=(const LoadFile& obj);

        void ok(){
            std::cout<<"loadfile ok"<<std::endl;
        }
        void loadNetWorkFile();
        void loadTrainFile();
};



#endif