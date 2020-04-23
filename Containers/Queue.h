//
// Created by erick-hdz on 23/04/20.
//

#ifndef POOL_PROYECT_QUEUE_H
#define POOL_PROYECT_QUEUE_H
#include "iostream"
#include "vector"
#include "array"

template<typename T>
class Queue {
public:
    // here we can init the default constructor
    explicit Queue(int s) : size(s + 1), front(0), rear(0) {

    };

    ~Queue() {
        delete data;
    };
    void insert(const T &t) {
        data->insert(t);
    };
    T &remove(){
        data->push_back();
    };
    bool is_empty(){
        return data->begin() == data->end();
    };
    bool is_full(){
        return ((data->begin()+1 )% data->size()) == data->end();
    }
private:
    int unsigned size,front,rear;
    std::vector<T>* data;
};


#endif //POOL_PROYECT_QUEUE_H
