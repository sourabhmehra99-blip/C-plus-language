#include<iostream>
using namespace std;

class person{
    public:
    void name(){
        cout<<"name: sourabh";
    }
};
int main()
{
    person p1;
    p1.name();
    return 0;
}

// program 2

class student{
    
    public:
    void display(string name){
        cout<<"Student name :"<< name<<endl;
    }
};
int main()
{
    string name;
    cout <<"Enter name : "<< endl;
    cin>>name;
    student s1;
    s1.display(name);
}
// output <--
// Enter name : 
// Sourabh
// Student name :Sourabh
