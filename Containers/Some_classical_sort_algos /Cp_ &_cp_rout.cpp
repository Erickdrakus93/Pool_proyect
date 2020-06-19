//
// Created by erick-hdz on 14/06/20.
//

#include <iostream>

using namespace std;
/**
 * This is a trivial copy procedure
 * @tparam In
 * @tparam Out
 * @param i1
 * @param i2
 * @param out
 * @return
 */
template<typename In,typename Out>
Out cp(In i1,In i2, Out out) {
    while (i1!= i2) {
        *out = *i1;
        ++i1;
        ++out;
    }
    return out;

}
/**
 * Here we have the copy procedure with out
 * Repetions as we can see |
 * @tparam In
 * @tparam Out
 * @param i1
 * @param i2
 * @param out
 * @return
 */

template<typename In,typename Out>
Out cp_out_repetitions(In i1,In i2,Out out){
    while (i1!=i2){
        if (*i1!=*i1++){//this is the binary predicate as we can see
            *out = *i1;
        }
        ++i1;
        ++out;
    }
    return out;
};
