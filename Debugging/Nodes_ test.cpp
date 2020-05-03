//
// Created by erick-hdz on 02/05/20.
//

#include "iostream"

using namespace std;


class Node{
public:
    explicit Node(int d,Node* r = nullptr):data(d),next(r){};
    int data;
    Node* next;
};

int main(){
    int n;
    Node* q;
    Node* r = nullptr;
    while (cin>>n) {
        q = new Node(n, r);
        r = q;
    }
    for(;q;q=q->next)
    {
        std::cout << q->data << "->";
        std::cout << "\n";
    }
}