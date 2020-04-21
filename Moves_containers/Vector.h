//
// Created by erick-hdz on 17/04/20.
//

#ifndef POOL_PROYECT_VECTOR_H
#define POOL_PROYECT_VECTOR_H


class Vector {
    friend Vector operator+(const Vector&, const Vector&);
    friend bool operator==(const Vector&, const Vector&);
private:
    int size{};
    double* elemnts;
public:
    explicit Vector(int s);
    ~Vector(){
         delete [] elemnts;
    }
    Vector(const Vector& a);
    Vector&operator=(const Vector& a);
    const double& operator[](int i)const;
    int get_size() const;
    double& operator[](int i);
    Vector& operator*(double a);
    Vector(Vector&&) noexcept ;
    Vector& operator=(Vector&&) noexcept;
    bool operator==(Vector&);
};


#endif //POOL_PROYECT_VECTOR_H
