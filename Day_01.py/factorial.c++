#include<iostream>
using namespace std;

int main()
{
    int num,ans =1;
    cout<<"Enter the number for factorial: ";
    cin>>num;
    for (int i =1;i<=num;i++){
        ans = ans *i;
    }
    cout<<"the factorial "<<ans<<endl;
    return 0;
}