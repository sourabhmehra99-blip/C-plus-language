// swapping two number using third variable

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the two number: ";
    cin>>a>>b;
    cout<<"before swapping: "<<a <<" "<<b<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"after swapping: "<<a<<" "<<b<<endl;
    return 0;
}

// swapping two number without using third variable

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two number: ";
    cin>>a>>b;

    cout<<"before swapping: "<<a <<" "<<b<<endl;
    a = a+b;
    b = a -b;
    a = a -b;
    cout<<"after swapping: "<<a<<" "<<b<<endl;
    return 0;

}
