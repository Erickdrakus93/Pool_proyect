//
// Created by erick-hdz on 21/05/20.
//

#ifndef POOL_PROYECT_DISTRO_PACKAGE_H
#define POOL_PROYECT_DISTRO_PACKAGE_H
//includes

#include "iostream"
#include <stdio.h>
#include <string.h>

enum Persistent_type{
    File,Queue,Pathway
};


struct Persistent_Attribute{
    Persistent_type type;
    char value[30];
};


class Distro_Package {
public:
    Distro_Package(const std::string& type) {
        sprintf(_desc, "Distributed Work package for: %s", type.c_str());
    };
    //some member functions as we can see
    void setFile(const std::string& f,char* v){
        sprintf(_temp,"\n File(%s):%s",f.c_str(),v);
        strcat(_desc,_temp);
    };
    void setQueue(const std::string&q,char* v){
        sprintf(_temp,"\n Queue(%s):%s",q.c_str(),v);
        strcat(_desc,_temp);
    };
    void setPathway(const std::string& v,char* s){
        sprintf(_temp,"\n Pathway(%s):%s",v.c_str(),s);
        strcat(_desc,_temp);
    };
    const char* getstate(){
        return _desc;
    };

private:
    char _desc[200],_temp[80];

};


#endif //POOL_PROYECT_DISTRO_PACKAGE_H
