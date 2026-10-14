#include<iostream>
using namespace std;

void callbyvalue(int x){
    x = x+10;
    cout<<"call by value: "<<x<<endl;
}

void callbyreference(int &x){
    x = x+10;
    cout<<"call by reference: "<<x<<endl;
}

int main()
{
    int a = 20;
    int b = 30;

    cout<<"Original value of a: "<<a<<endl;
    callbyvalue(a);
    cout<<"new value of a: "<<a<<endl;

    cout<<"original value of b: "<<b<<endl;
    callbyreference(b);
    cout<<"new value of b: "<<b<<endl;
    return 0;
}