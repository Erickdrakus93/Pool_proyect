//
// Created by erick-hdz on 17/04/20.
//
template <typename Container,typename Value>

Value sum(const Container& container, Value value){
    for (auto x:container) {
        value += x;
    }
    return value;
}
