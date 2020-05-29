//
// Created by erick-hdz on 22/05/20.
//

#include "Maybe.h"

using namespace std;

template<typename T>
/**
 * This is a global construction function
 * @tparam T
 * @param context
 * @return an Instance of Maybe object
 */
Maybe<T> maybe(T* context){
    return Maybe<T>(context);
};
