// write a program of fibonacci series up to n terms
#include<iostream>
using namespace std;

int main()
{
    int n,t1=0,t2=1;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci series up to "<<n<<" terms: "<<endl;
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<t2<<" ";
        }
        else{
            int nexttrem = t1+t2;
            cout<<nexttrem<<" ";
            t1 =t2;
            t2 = nexttrem;
        }
       
    }
    return 0;
}