// Reversing a number 

#include<iostream>
using namespace std;

int main()
{
    int num,rev =0, rem;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number is: "<<num<<endl;

   while (num!=0)
   {
    rem = num % 10;
    rev = rev*10 + rem;
    num = num/10; 
    
   }
   cout<<"the reverse number: "<<rev<<endl;
   return 0;
}

int main()
{
    int num,rev =0, rem;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number is: "<<num<<endl;
    int temp = num;

   while (num!=0)
   {
    rem = num % 10;
    rev = rev*10 + rem;
    num = num/10; 
    
   }
   if(temp == rev){
    cout<<"the number is palindrome: "<<rev<<endl;
   }
   else{
    cout<<"the number is not palindrome: "<<rev<<endl;
   }
   return 0;
}