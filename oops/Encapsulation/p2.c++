// static member funcion

#include <iostream>
using namespace std;    

class student{
    public:
        static int count;   //static data member
        student(){
            count++;
        }
};
int student::count=0;   //static data member initialization
int main(){
    student s1;
    student s2;
    student s3;
    cout<<"number of students: "<<student::count<<endl;  //accessing static data member using class name
    return 0;
}