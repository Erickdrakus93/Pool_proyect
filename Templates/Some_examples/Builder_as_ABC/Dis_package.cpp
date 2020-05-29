//
// Created by erick-hdz on 21/05/20.
//
#include "iostream"
#include <cstdio>
#include <string>


enum Persistent_Type{
    File,Queue,Pathway
};

struct PersistentAttribute{
    Persistent_Type type;
    char value[30];
};

