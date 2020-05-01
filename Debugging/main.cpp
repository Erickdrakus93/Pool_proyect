//
// Created by erick-hdz on 01/05/20.
//

#include "iostream"
#include "map"
#include "string"


using namespace std;

int main() {
    typedef map<string, string, less<>> mapType;
    mapType m;
    string name;
    string number;
    cout << "enter the name";
    cin >> name;
    cout << "Enter the number";
    cin >> number;
    //here we can allocate in the next manner;
    m[name] = number;
    //here we can use the iterator manner as we can see
    //this is the iterator type as we can see
    for(auto& i:m){
        std::cout << i.first << ":" << i.second << std::endl;
    }
    //finding a name in the next manner
    auto x = m.find(name);
    cout << name << "number is"<< (*x).second << endl;
    //here we can call the inside method erase,for delete the inside number
    m.erase(x);
    //here we can iterate in the next manner as we can see
    for(auto& item:m){
        cout << item.first << ":" << item.second << endl;
    }
    return 0;
}