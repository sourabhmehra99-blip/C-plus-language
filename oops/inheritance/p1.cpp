// simple inheritance program

#include<iostream>
using namespace std;

class aminal{ // parent class
    public:
    void eat(){
        cout<<"Animal is eating..."<<endl;
    }
};
// child class dog inherit properties of aminal
class dog:public aminal{ 
    public:
    void bark(){
        cout<<"dog is barking..."<<endl;
    }
};

int main(){
    dog dog1;
    dog1.bark();
    dog1.eat();
    return 0;
}