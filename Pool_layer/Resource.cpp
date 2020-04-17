//
// Created by erick-hdz on 09/04/20.
//

#include "Resource.h"
Resource::Resource(){
    value = 0;
}
void Resource::reset() {
    value = 0;
}
int Resource::getValue() {
    return value;
}
void Resource::setValue(int number) {
    value = number;
}
