#include<iostream>
using namespace std;

// class and object
// Encapsulation
// make comments on each line of code

class bankaccount{
    private:
    int balance;
    public:
    void deposit(int amount){
        if(amount>0){
            balance = amount;
        }
    }
    int getbalance(){
        return balance;
    }
};
int main(){
    bankaccount b1;
    b1.deposit(5000);
    cout<<"balance: "<<b1.getbalance()<<endl;
    return 0;
}

// output:
// balance: 5000