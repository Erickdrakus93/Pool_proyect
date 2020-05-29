//
// Created by erick-hdz on 19/05/20.
//
#include <iostream>
#include "ios"
#include "vector"
#include "memory"

namespace firstspace{
    using namespace firstspace;
    using namespace std;
struct HTML_element {
    string name;
    string text;
    vector<HTML_element> elements;
    const std::size_t ident_size = 2;

    HTML_element() = default;

    explicit HTML_element(const string &name, const string &text) : name(name), text(text) {};

    string to_str() {
        string str;
        str.append(name);
        str.append(text);
        for (auto &x:elements) {
            str.append(x.name);
            str.append(x.text);
        }
        return str;
    }
};

}
//here we can declare the next builder as we can note
namespace space2 {
using namespace firstspace;

    struct HTML_Build {
        typedef HTML_Build self;
        HTML_element element;

        explicit HTML_Build(string &root_name) {
            element.name = root_name;
        }

        self &add_child(string &name, string &txt) {
            HTML_element New{name, txt};
            element.elements.emplace_back(New);
            return *this;
        }

        //the last is to delegate in the next manner as we can note
        string to_str() {
            return element.to_str();
        }
    };
}

