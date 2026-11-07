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

