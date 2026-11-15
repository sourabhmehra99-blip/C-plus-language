#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int count = 0;
    for(int i =1;i<=num;i++){
        if (num%i==0){
            count +=1;
        }
        else{
            continue;
        }
    }
    if(count >2){
        cout<< num << " is not a prime number." << endl;
    }
    else{
        cout<< num << " is a prime number." << endl;
    }

}