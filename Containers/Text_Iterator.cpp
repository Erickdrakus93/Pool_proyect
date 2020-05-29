//
// Created by erick-hdz on 27/05/20.
//

#include "Text_Iterator.h"
#include "algorithm"

bool match_text(Text_Iterator first_iterator,Text_Iterator last_iterator,const string& str);

Text_Iterator & Text_Iterator::operator++() {
    ++out;//the next element of the code
    if (out == in->end()){
        ++in;
        std::list<Line> line;
        if(in!=line.end()){
            out = in->begin();
        }
    };
    return *this;
};

//in the last we can call as the default manner as we can see
Text_Iterator& Text_Iterator::operator=(const Text_Iterator &other){
    in = other.in;
    out = other.out;
    return *this;
}

bool Text_Iterator::operator!=(const Text_Iterator &other) const {
    return in!=other.in && out!=other.out;
}

Text_Iterator::Text_Iterator(_List_iterator<Line> iterator, Line::iterator iterator1):
in{iterator},out{iterator1}{
    //this is the manner to construct all the manner as we can see

};


template<typename Iter>
//this is the manner as we can see
void advance_another(Iter& p,int n){
    while(n<0){
        ++p;
        --n;
    }
}

Text_Iterator find(Text_Iterator first,Text_Iterator last,const string& s){
    if(s.empty()){
        return last;
    }
    char first_char = s[0];
    while(true){
        auto p = std::find(first,last,first_char);
        if(p==last || match_text(p,last,s)){
            return p;
        }
        first =++p;
    }
}



bool match_text(Text_Iterator first_iterator,Text_Iterator last_iterator,const string& str){
    vector<char> res;
    for(auto ele = first_iterator;ele!=last_iterator;++ele){
        res.push_back(*ele);
    }
    for (int i = 0; i <str.size() ; ++i){
        if(str[i]==res[i]){
            return true;
        }
    }
    return false;
};