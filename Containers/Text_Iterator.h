//
// Created by erick-hdz on 27/05/20.
//

#ifndef POOL_PROYECT_TEXT_ITERATOR_H
#define POOL_PROYECT_TEXT_ITERATOR_H


#include "Lines_Document.cpp"

using Line = vector<char>;
using namespace std;
class Text_Iterator{
    list<Line>::iterator in;
    Line::iterator out;
public:
    explicit Text_Iterator(_List_iterator<vector<char>>iterator,vector<char>::iterator iterator1);
    //The constructor
    char& operator*(){
        return *out;
    };
    Text_Iterator& operator++();

    bool operator==(const Text_Iterator& other) const{
        return in==other.in && out ==other.out;
    };
    Text_Iterator& operator=(const Text_Iterator& other);
    //the next part is the same//d
    bool operator!=(const Text_Iterator& other)const;
};


#endif //POOL_PROYECT_TEXT_ITERATOR_H
