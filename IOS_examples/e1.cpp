//
// Created by erick-hdz on 06/05/20.
//

#include "iostream"
#include "ios"

using namespace std;

int main(){
    cout << "cout.width() = " << cout.width() << endl;
    cout << "cout.precision() = " << cout.precision() << endl;
    cout << "cout.another_member " << cout.flags()<<endl;
    //here we can catch another functions as we can see
    cout << "Thats another functions of the cout as class " << endl;
    return 0;
}

int another_main(){
    char* buffer{new char[80]};
    cin.getline(buffer,10);
    cout << "["<< buffer << "]\n";
    cin.getline(buffer,45);
    cout << "["<<buffer << "]\n";
    return 0;
}


int another_main_2() {
    char *buffer{new char[]{"?????????"}};
    cin >> ws;
    cin.read(buffer, 10);
    cout << "[" << buffer << "]\n";//here can call the std::cout << std::endl;
    return 0;
}
