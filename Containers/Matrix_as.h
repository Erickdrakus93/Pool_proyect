//
// Created by erick-hdz on 10/06/20.
//

#ifndef POOL_PROYECT_MATRIX_AS_H
#define POOL_PROYECT_MATRIX_AS_H


#include <iostream>
#include <vector>
//here we can declare the std space

using namespace std;

/**
 * Here we can think as the matrix
 */

template<typename T>
class Matrix_as {
public:
    /*
     * Here we can declare a constructor that reads an array of size n;
     */
    explicit Matrix_as(unsigned r=1,unsigned c=1):rows(r){
        for (int i = 0; i <r ; ++i) {
            rows[i] = new vector<T>(c);
        }
    };
    //here we can declare the next constructor by simulate the construction
    //here is like a copy constructor, but with an object that acts like him.
    Matrix_as(T**& array,int n){
        for (int i = 0; i <n ; ++i) {
            rows[i] = array[i];
        }
    };
    //here we delete each row in rows
    ~Matrix_as(){
        for (int i = 0; i <rows.size() ; ++i) {
            delete rows[i];
        }
    };

    /**
     *  Here we only delegate the [] operator
     *  Of the class vector
     * @param i
     * @return
     */
    std::vector<T>& operator[](unsigned i){
        return (*rows)[i];
    };
    /**
     * The next function gives the i-th column of the Matrix object
     * it acts as the [] operator as we can see
     * @param j
     * @return
     */
    vector<T> column(unsigned j){
        vector<T> column(rows_size());
        for (int i = 0; i <rows.size() ; ++i) {
            column.push_back(((*rows)[i])[j]);
            }
        return column;//here we have the manner as we can see
    };
    unsigned rows_size(){
        return rows.size();
    };
    /**
     * Here we can note that this is an invariant as we can see
     * @return
     */
    unsigned columns_size(){//here we can use the row[0]->size();
        auto x = rows.begin();
        return x->size();
    };
    /**
     * Here we have the classic operator in matrix spaces:
     * The transpose as we can see
     * @return
     */
    Matrix_as& transpose(){
        //here we can swap the size of the rows with the columns
        swap(rows_size(), columns_size());
        for (int i = 0; i <columns_size() ; ++i) {
            column(i) =(*rows)[i];
        }
        return *this;

    };
    //Here we let me call the next part of the main example as we can see
protected:
    vector<vector<T>*> rows;
};


#endif //POOL_PROYECT_MATRIX_AS_H
