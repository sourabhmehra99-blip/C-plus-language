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

// Program 2
// child inherit properties of parents

class father{   // base or parent class
    public:
    string name;
    void money(){
        cout<<"Father gives home to "<<name<<endl;
    }
};
class child :public father{ // derive class 
    public:
    void spend(){
        cout<<name<<" buy a new car."<<endl;
    }
};

int main(){
    child c1; // we only make object of child class but we can use parent method 
    c1.name = "Rohan";
    c1.money();
    c1.spend();
}
// Output <--
// Father gives home to Rohan
// Rohan buy a new car.