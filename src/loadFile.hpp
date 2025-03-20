#ifndef LOADFILE_HPP
#define LOADFILE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
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
        std::string                  network_file;
        std::string                  train_file;


    public:
        LoadFile(std::string net_file = "./config/network.txt", std::string train_file = "./config/train.txt"):nodes(),rails(), network_file(net_file), train_file(train_file){}
        LoadFile(const LoadFile& obj);
        LoadFile& operator=(const LoadFile& obj);

        void ok(){
            std::cout<<"loadfile ok"<<std::endl;
        }
        void loadNetWorkFile();
        void loadTrainFile();
        void setNetWorkFile(std::string fileName){
            network_file = fileName;
        }
        void setTrainFile(std::string fileName){
            train_file = fileName;
        }
        std::string getNetWorkFile()const{
            return network_file;
        }
        
        std::string getTrainFile()const{
            return train_file;
        }

        class LoadFileError:public std::exception{
            protected:
                std::string message;
            public:
                LoadFileError(const std::string& msg):message(msg){}
                ~LoadFileError() throw(){}
                const char* what() const throw(){
                    return message.c_str();
                }
        };
};



#endif