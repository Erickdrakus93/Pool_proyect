//
// Created by erick-hdz on 27/05/20.
//

#include "Text_Iterator.h"
#include "algorithm"
#include "iterator"
#include "unordered_map"



//here we can use the std Library
using namespace std;
bool match_text(Text_Iterator first_iterator,Text_Iterator last_iterator,const string& str);
bool match(Text_Iterator iter_1,Text_Iterator iter_2,const string& str);


Text_Iterator& Text_Iterator::operator++() {
    ++out;//this is the manner to update the main example as we can see
    if (out == in->end()){
        ++in;
        std::list<Line> line;//This is the type of C::iterator
        if(in!=line.end()){
            out = in->begin();//here we can add the next lines as we can see
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
/**
 * This is the basic constructor of the iterator of the
 * type of text to do some transverse algorithms
 *
 * @param iterator
 * @param iterator1
 */
Text_Iterator::Text_Iterator(_List_iterator<Line> iterator, Line::iterator iterator1):
in{iterator},out{iterator1}{
    //this is the manner to construct all the manner as we can see

};


template<typename Iter>
//this is the manner as we can see
void advance_another(Iter& p,int n){
    while(n>0){
        ++p;
        --n;
    }
}

template<typename Iter>
//this is the type Integer as we can see
void advance_with_neg(Iter& iter,int n){
    if(n>0){
        ++iter;
        --n;
    }
    if(n<0){
        --iter;
        ++n;
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

/**
 * Here we can create the next element
 * And compare the sequences of chars as we can see
 * @param first_iterator
 * @param last_iterator
 * @param str
 * @return a boolean expression
 */

bool match_text(Text_Iterator first_iterator,Text_Iterator last_iterator,const string& str){
    vector<char> res;
    for(auto ele = first_iterator;ele!=last_iterator;++ele){
        res.push_back(*ele);//add the elements in the line
    }
    for (int i = 0; i <str.size() ; ++i){
        if(str[i]==res[i]){
            return true;
        }
    }
    return false;
};
//here we can define the next part of the use as we can see
/**
 * Here is a logical subroutine that operates like the rest
 * @param iter_1
 * @param iter_2
 * @param const str
 * @return bool expressions
 */
bool match(Text_Iterator iter_1, Text_Iterator iter_2,const string& str){
    auto r = str.begin();
    while(iter_1!=iter_2){
        if(*iter_1!=*r){
            return false;
        }
        ++iter_1;
        ++r;
    }
    return true;
}

template<typename iter_1,typename Iter_2>
Iter_2  copy_in_not_standard_library(iter_1 i1, iter_1 i2,Iter_2 i_f2){
    if (i1 == i2){
        std::cerr << "The sequence is empty";
    };
    for(auto x =i1;x!=i2;++x){
        *i_f2 = *x;
        //here we need advance the next iterator
        ++i_f2;
    }
    return i_f2;
};
/**
 * The next is a copy procedure as the ordinary
 * @tparam Iter_1
 * @tparam Iter_2
 * @param i1
 * @param i12
 * @param i2
 * @return
 */
template<typename Iter_1,typename Iter_2>
Iter_2 copy_as_simulate(Iter_1 i1, Iter_1 i12, Iter_2 i2){
    while(i1!=i12){
        *i2 = *i1;
        ++i1;
        ++i2;
    }
    return i2;
};

//here we can define the copy procedure with the semantics of setence
template<typename Sentence,typename Iter1,typename Iter2>
//here we need input_iterator and output_iterator type
Iter2 copy_if(Iter1 i1,Iter1 i12,Iter2 i2,Sentence sent) {
    while (i1 != i12) {
        if (sent(*i1)) {//here is the logical sentence in the value of the iterator as we can see
            *i2 = *i1;
        }
        ++i1;
        ++i2;
    };//here finally we return the element of the iterator of the type 2
    return i2;
};
/**
 * This is the unique Copy procedure
 * @tparam Iter1
 * @tparam Iter2
 * @param i1
 * @param i2
 * @param i22
 * @return
 */

template<typename Iter1,typename Iter2>
Iter2 unique_copy(Iter1 i1,Iter1 i2,Iter2 i22){
    while(i1!=i2){

        if(*i1!=*i1++){
            *i22 = *i1;
        }
        ++i22;
        ++i1;
    }
    return i22;
}