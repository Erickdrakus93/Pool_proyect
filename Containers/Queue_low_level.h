//
// Created by erick-hdz on 23/04/20.
//

#ifndef POOL_PROYECT_QUEUE_LOW_LEVEL_H
#define POOL_PROYECT_QUEUE_LOW_LEVEL_H

template<typename T>
class Queue_low_level {
public:
    explicit Queue_low_level(int l):size(l),font(0),rear(0),data{new T[size]}{};
    ~Queue_low_level(){
        delete[] data;
    }
    T& remove(){
        return data[font++ % size];
    }
    void insert(const T& t){
        data[rear++%size] = t;
    }
    bool is_empty(){
        return rear == font;
    }
    bool is_full(){
        return (rear+1)%size== font;
    }
private:
    T* data;
    int size,font,rear;
};


#endif //POOL_PROYECT_QUEUE_LOW_LEVEL_H
