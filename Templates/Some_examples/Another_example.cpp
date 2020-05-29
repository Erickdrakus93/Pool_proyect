//
// Created by erick-hdz on 19/05/20.
//
#include "iostream"
#include "ios"
#include "string"

class Person{
public:
    explicit Person(std::string name){
        name = move(name);
    }
    virtual void print() {
        std::cout << "My name is the next"
                  << name << "\n";
    }

protected:
    std::string name;
};

class Student:public Person{
    Student(std::string& name,float& g):Person(name),gpa(g){};
    void print() override {
        std::cout << "My name is" <<
        name << "And my G.P.A is " << gpa << "\n";
    }

private:
    float gpa;
};


class Professor: public Person{
public:
    Professor(std::string& name,int n):Person(name),numPubs(n){
    };
    void print()override {
        std::cout << "My name is" <<
        name << "And I have " << numPubs << "Publications\n";
    }

private:
    int numPubs;

};