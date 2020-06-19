//
// Created by erick-hdz on 27/05/20.
//
#include "iostream"
#include "algorithm"
#include "vector"
#include "list"
#include "Text_Iterator.h"

using namespace std;


using Line = vector<char>;

struct Document {
    list<Line> line;

    //here we can set the collection of Lines
    Document() {
        line.emplace_back(Line{});//here is the construction
    };
    //This is for to do a for loop as we can see;
    Text_Iterator begin(){
        return Text_Iterator(line.begin(),line.begin()->begin());
    };
    Text_Iterator end(){
        auto last = line.end();
        --last;
        Text_Iterator(last,last->end());
    };
};
//here we can define the next operator

istream& operator>>(istream& in,Document& doc) {
    for (char c; in.get(c);) {//getting the char in the reference
        doc.line.back().push_back(c);//adding to the last element
        if (c == '\n') {
            doc.line.emplace_back(Line{});
        }
    }
    if (!doc.line.back().empty()) {
        doc.line.emplace_back(Line{});//this is the default constructor
    }
    return in;
};

void print(Document& document){
    for(auto ele:document){
        std::cout << ele;

    }
}

void erase_line(Document& doc, int n){
    //here we can use the next part of the logic
     if(n<0 || doc.line.size()-1<n){
         return;
     }
     //here we call the begin() function in the next part of the main example as we can see
     auto p = doc.line.begin();//this is the iterator
     advance(p,n);//this is the STD advance function
     doc.line.erase(p);
}
//this is the manner to use the next part of the use of the advance
template <typename Iter>
void advance(Iter& p,int n){
    while(n>0) {
        ++p;
        --n;
    }
};
//this is the manner to count the number of the char
int count_the_char(Document& doc){
    int count = 0;
    for(auto x = doc.begin();x!=doc.end();++x){
        ++count;
    }
    return count;
}
//this is the manner to return the element
//this is the manner to use the call inside that functions
int the_char_counter(Document& doc){
    vector<Text_Iterator> res;
    for(auto x= doc.begin();x!=doc.end();++x){
         res.push_back(x);
    };
    return res.size();
    //this is the manner to call inside the next manner as we can see
}

int counter_char(Document& doc){
    int counter = 0;
    for(auto car:doc){
        ++counter;
    }
    return counter;
}

template<typename In,typename T>
T& find(In first,In last,T& val){
    for(auto x=first;x!=last;++x){
        if(*x==val){
            return x;
        }
    }
    return last;//here we not found;
}

template<typename In,typename T>
T& find_log(In first,In last,const T&val){
    while(first!=last && *first!=val){
        ++first;
    }
    return first;
}


int main(){
    Document my_doc{};
    print(my_doc);
}