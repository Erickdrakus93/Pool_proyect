//
// Created by erick-hdz on 22/05/20.
//

#ifndef POOL_PROYECT_MAYBE_H
#define POOL_PROYECT_MAYBE_H
#include "iostream"
#include "vector"


template <typename T>
class Maybe {
private:
    T* context;
    //the next context
public:
    explicit Maybe(T* context):context(context){};
    /**
     *
     * @param evaluator
     * @return boolean manner of decider
     */
    template<typename Functor>
    auto With(Functor evaluator){
        return context != nullptr ?  maybe(evaluator(context)): nullptr;
    };
    /**
     * this is the manner of the same object t
     * @param action
     * @return  context as the manner
     */
    template<typename TFunc>
    auto Do(TFunc action){
        if(context!= nullptr){
            action(context);
        };
        return *this;
    };
};


#endif //POOL_PROYECT_MAYBE_H
