//
// Created by erick-hdz on 19/05/20.
//

#ifndef POOL_PROYECT_TAG_H
#define POOL_PROYECT_TAG_H

#include "iostream"
#include "string"
#include "vector"

using namespace std;
class Tag {
    friend ostream& operator<<(ostream& os,const Tag& tag){
        return os << "This is the tag" << tag.name
                  << "Tag text is here" << tag.text
                  << "Tag attributes" << tag.attributes.data();
    }

public:
    string name;
    string text;
    vector<Tag> children;
    vector<pair<string,string>> attributes;
    //here we define the next part of the constructors
protected:

    explicit Tag(string nm,string txt):name(move(nm)),text(move(txt)){};
    Tag(Tag& some_tag):name(some_tag.name),text(some_tag.text),children(some_tag.children){};//the copy constructor

    //here we can construct the next part of the children
    explicit Tag(string nm,vector<Tag> chldrn):name(move(nm)),children(move(chldrn)){};

};


#endif //POOL_PROYECT_TAG_H
