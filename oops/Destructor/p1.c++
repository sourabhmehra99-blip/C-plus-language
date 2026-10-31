#include<iostream>
using namespace std;

class student{
    public:
        int age;
        // parameterized constructor
        student(int a){
            age = a;
            cout<<"studnet age is "<<age<<endl;
        }

// destructor
// A destructor is a special member function that is automatically called when an object goes out of scope
~student(){
    cout<<"Destructor destroy object"<<endl;
}
};
int main(){
    student s1 (20);
    return 0;
}
// output:
// studnet age is 20
// Destructor destroy object