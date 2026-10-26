#include<iostream>
using namespace std ;

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    if (num >= 0){
        if (num == 0){
            cout<<"Number is Zero"<<endl;
        }
        else {
            cout<<"Number is positive"<<endl;
    }
        }
    else{
                cout<<"Number is Negative"<<endl;

        }
return 0;
}