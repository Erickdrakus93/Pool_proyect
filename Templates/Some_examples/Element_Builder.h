//
// Created by erick-hdz on 19/05/20.
//

#ifndef POOL_PROYECT_ELEMENT_BUILDER_H
#define POOL_PROYECT_ELEMENT_BUILDER_H
#include "ELEMENT_HTML.h"
#include "iostream"
#include "vector"

class Element_Builder{
public:
    explicit Element_Builder(const string& name){
        root.name;
    }
    typedef Element_Builder self;
    operator ELEMENT_HTML() const {
        return root;
    };

    self& create_child(const string& nm,const string& txt){
        ELEMENT_HTML adder_element{nm,txt};
        root.elemnts.emplace_back(adder_element);
        return *this;
    }
    /**
     * This is the manner of constructor as the manner
     * As we can see
     * @return str as representing the object
     */
    string str(){
        return root.to_str();
    }

protected:
    ELEMENT_HTML root;
};


#endif //POOL_PROYECT_ELEMENT_BUILDER_H
