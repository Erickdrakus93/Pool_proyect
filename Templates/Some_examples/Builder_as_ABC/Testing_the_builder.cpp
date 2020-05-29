//
// Created by erick-hdz on 21/05/20.
//
#include "stdio.h"
#include "string.h"
#include "Reader.h"
#include "Reader.cpp"
#include "UnixBuilder.h"
#include "Vms_Builder.h"

int main(){
    UnixBuilder unixBuilder;
    Vms_Builder vmsBuilder;
    Reader reader{}; //this is to pointer the next function call
    //here we can use to construct
    reader.set_builder(&unixBuilder);
    reader.constructor(input,NUM_ENTRIES);
    //as the output we can see the next
    std::cout << unixBuilder.get_result()->getstate() << std::endl;

    //here we can define the next

    reader.set_builder(&vmsBuilder);
    reader.constructor(input,NUM_ENTRIES);
    //Here we can put as the next lines of the code as we can see
    std::cout << vmsBuilder.get_result()->getstate() << std::endl;

}
