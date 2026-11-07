// a) Program in C/C++ to declare an integer array and display simple and reverse order of all
// elements.
// Part A: Initialize array with values. Iterate forward from index 0 to N-1 to print simple
// order. Iterate backward from index N-1 down to 0 to print reverse order.

#include<iostream>
using namespace std;

void partA() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 4;
    cout<<"===Simple order==="<<endl;
    for (int i =0;i<=n;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"===Reverse order==="<<endl;
    for (int i = n;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    
};
int main(){
    cout<<"part A "<<endl;
    partA();
    
}
// part A 
// ===Simple order===
// 10
// 20
// 30
// 40
// 50
// ===Reverse order===
// 50
// 40
// 30
// 20
// 10

// b) Program in C/C++ to declare an integer array &amp; display 10 elements, value taken by user.


int main(){
    int i,n=9;
    int arr[10];
    cout<<"Enter 10 numbers: "<<endl;
    for (i=0;i<=n;i++){

        cin>>arr[i];
    }
    
    cout<<"Array of 10 elements are: "<<endl;
    for (i=0;i<=n;i++){
        
        cout<<arr[i]<<endl;
    }
    return 0;
}

// Enter 10 numbers: 
// 22 33 33 44 55 6 7 8 10 11
// Array of 10 elements are: 
// 22
// 33
// 33
// 44
// 55
// 6
// 7
// 8
// 10
// 11