//
// Created by erick-hdz on 21/05/20.
//

#include "Reader.h"

void Reader::constructor(Persistent_Attribute list[], int num) {
    //here we can use the next pointer to tranverse the array
    Persistent_Attribute* ptr = list;//this is the manner to be the same as the object,
    //In the manner of the main object as we can see
    for (int i = 0; i <num ; ++i) {
        if (ptr->type ==File){
            _builder->configureFile(ptr->value);
        }else if (ptr->type == Queue){
            _builder->configureQueue(ptr->value);
        }else if(ptr->type==Pathway){
            _builder->configurePathway(ptr->value);
        }
        ++ptr;//update as the i the init of the indexes
    }
}
const int NUM_ENTRIES = 10;
//the next is an array of Persistent Attributes
Persistent_Attribute input[NUM_ENTRIES]{
        {
                File,    "This is the file"
        },
        {
                File,    "config.sys"
        },
        {
                Queue,   "log"
        },
        {
                Pathway, "authentication"
        },
        {
            Pathway,"Error Processing"
        }
};

