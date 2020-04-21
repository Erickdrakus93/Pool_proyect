//
// Created by erick-hdz on 09/04/20.
//

#include "Resource.h"
Resource::Resource(){
    value = 0;
}
int Resource::getValue() const {
    return value;
}
void Resource::setValue(int number) {
    value = number;
}
void Resource::reset() {
    value = 0;
}
