//
// Created by erick-hdz on 22/04/20.
//

#include <iostream>
#include "List.h"
#include <string>

using namespace std;
int main(){
    List<string> friends;
    friends.insert("Erick Hernandez");
    friends.insert("Dixon Names");
    friends.insert("Walter White");
    friends.insert("Mason Joe");
    friends.print();
    string name;
    cin >> name;
    try {
        friends.remove(name);
        cout << "Removed:" << name << endl;
        friends.print();
    } catch (exception& s) {
        s.what();
    }


}