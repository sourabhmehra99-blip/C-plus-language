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

int main(){
    int arr[5],i,temp=0;
    cout<<"Enter the 5 number: ";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        temp +=arr[i];
    }
    cout<<"The sum of the numbers is: "<<temp<<endl;
    float average = temp/5;
    cout<<"The average of the numbers is: "<<average<<endl;
    return 0;
}