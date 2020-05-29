//
// Created by erick-hdz on 19/05/20.
//

#ifndef POOL_PROYECT_ELEMENT_HTML_H
#define POOL_PROYECT_ELEMENT_HTML_H
#include <utility>

#include "string"
#include "iostream"
#include "vector"
#include "Element_Builder.h"
#include "memory"

using namespace std;
class ELEMENT_HTML {
public:
    //Constructors of the next code
    explicit ELEMENT_HTML(string name, string text) : name(std::move(name)), text(std::move(text)) {};
    ELEMENT_HTML() = default;

    static unique_ptr<Element_Builder> create(const string& word_init){
        return std::make_unique<Element_Builder>(word_init);
    }

    string name;
    string text;
    vector<ELEMENT_HTML> elemnts;
    string to_str(){
        string out;
        out.append(name);
        out.append(text);
        for(auto& x:elemnts){
            out.append(x.name);
            out.append(x.text);
        }
        return out;
    };
};


#endif //POOL_PROYECT_ELEMENT_HTML_H
