// default constructor 
// all detail about default constructor is given below
// A default constructor is a constructor that is called when an object of a class is created without any arguments.
// it sets the values
// its name is same as the class name
// in default constuctor could not return any value
#include <iostream>
using namespace std;    

class student{
    public:
    // default constructor
        student(){
            cout<<"default constructor called"<<endl;
        }
};
int main(){
    student s1;
    student s2;
    return 0;
}