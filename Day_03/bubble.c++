// bubble sorting algorithm implementation in C++

#include <iostream>
using namespace std;

int main(){
    int n[5], i,j,temp;
    cout<<"Enter 5 numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>n[i];
    }
    for (i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(n[j]>n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    cout<<"Sorted numbers are: ";
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
    return 0;
}