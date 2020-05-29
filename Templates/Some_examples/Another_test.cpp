//
// Created by erick-hdz on 19/05/20.
//
#include "iostream"
#include "Element_Builder.h"
#include "ELEMENT_HTML.h"

int main(){
    Element_Builder builder{"Example"};
    builder.create_child("li","word").create_child("tag","another word");
    builder.create_child("tag_child","more word");
    cout << builder.str() << std::endl;
};

void the_test() {
    Element_Builder build{"name"};
    build.create_child("li", "some text");
    build.create_child("<tag_child", "Another_some text");
    std::cout << build.str() << std::endl;

    Element_Builder element = ELEMENT_HTML::create("TDFF");
    element.create_child("name", "Some_text");
    ELEMENT_HTML elementHtml = element;
    element.create_child("This is the manner", "Another Text");
    std::cout << "This is the html element" << elementHtml.to_str() << std::endl;
}