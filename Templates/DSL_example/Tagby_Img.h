//
// Created by erick-hdz on 19/05/20.
//

#ifndef POOL_PROYECT_TAGBY_IMG_H
#define POOL_PROYECT_TAGBY_IMG_H
#include "Tag.h"
#include "iostream"
#include "vector"

class Tagby_Img: public Tag {
    //here we can define the next object inits as we can see
public:
    explicit Tagby_Img(const string& URL_image):Tag("image",""){
        auto element = make_pair("source",URL_image);
        attributes.emplace_back(element);
    };
    //that is the next part of the use of the constructors

};


#endif //POOL_PROYECT_TAGBY_IMG_H
