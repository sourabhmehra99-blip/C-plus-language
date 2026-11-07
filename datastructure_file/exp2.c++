// Program in C/C++ to declare an integer array and calculate the sum &amp;
//  average of 10 elements of
// array, value taken by user.
// Algorithm

// Page 5 of 25

// 1. Declare an integer array of size 10 and a sum variable initialized to 0.
// 2. Iterate 10 times to take integer input from user, adding each value to sum.
// 3. Calculate average using formula: average = (float)sum / 10. Print sum and average.

#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int sum =0;

    for(int i = 0;i<10;i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
        sum += arr[i];
    }

    for(int i = 0;i<10;i++)
    {
        cout<<"element"<<i+1<<" : "<<arr[i]<<endl;
    }
    cout<<"the total sum: "<<sum<<endl;
    int ave;
    ave = (float)sum/10;
    cout<<"the average : "<<ave<<endl;
    return 0;
}