#include<iostream>
using namespace std;    

int main(){
    int arr[5],i;
    int temp,j;
    cout<<"Enter the 5 number: ";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for (i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    cout<<"the largest number is: "<<arr[4]<<endl;
    cout<<"the smallest number is: "<<arr[0]<<endl;
   
}