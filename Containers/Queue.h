//
// Created by erick-hdz on 23/04/20.
//

#ifndef POOL_PROYECT_QUEUE_H
#define POOL_PROYECT_QUEUE_H
#include "iostream"
#include "vector"
#include "array"
/**
 * Here we use more layers in the next
 * Sense of the next template
 * @tparam T
 */
template<typename T>
class Queue {
public:
    // here we can init the default constructor
    explicit Queue(std::vector<T>& l){
        for(auto& x:l ){
            for (auto& y:data ) {
                x = y;
            }
        }

    };
    ~Queue() {
        delete data;
    };
    void insert(const T &t) {
        data->insert(t);
    };
    T &remove(){
        data->pop_back();
    };
    bool is_empty(){
        return data->begin() == data->end();
    };
    bool is_full(){
        return ((data->begin()+1 )% data->size()) == data->end();
    }
private:
    std::vector<T>* data;
};


#endif //POOL_PROYECT_QUEUE_H
