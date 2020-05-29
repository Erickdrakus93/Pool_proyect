//
// Created by erick-hdz on 19/05/20.
//

#ifndef POOL_PROYECT_TAG_EXTENSION_BY_PARAGRAPH_H
#define POOL_PROYECT_TAG_EXTENSION_BY_PARAGRAPH_H
#include "iostream"
#include "vector"
#include "Tag.h"

class Tag_extension_by_Paragraph: public Tag{
    //here we can define the constructors
public:
    explicit Tag_extension_by_Paragraph(const string& txt): Tag("p", txt){};
    Tag_extension_by_Paragraph(std::initializer_list<Tag> children): Tag("p", children){};
};


#endif //POOL_PROYECT_TAG_EX    TENSION_BY_PARAGRAPH_H
