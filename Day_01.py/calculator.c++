#include<iostream>
using namespace std;

int add_fun(int a,int b){
    int sum = a+b;
    return(sum);
}
int sub_fun(int a,int b){
    int sub = a-b;
    return(sub);
}
int mul_fun(int a,int b){
    int mul = a*b;
    return(mul);
}
int div_fun(int a, int b){
    if (b==0){
        return(0);
    }
    else{
        return(double) a/b ;
    }
}
int main()
{

    int choice ;
    cout<<"ADDTION\n";
    cout<<"SUBSTRACT\n";
    cout<<"MULTIPLY\n";
    cout<<"DIVISION\n";
    cout<<"Enter your choice(1-4): "<<endl;
    cin>>choice;
    
    int a,b;
    cout<<"Enter first number :"<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    
    if (choice == 1){
        cout << "Result: " << add_fun(a, b) << endl;

    }
    else if (choice == 2){
        cout << "Result: " << sub_fun(a, b) << endl;
    }
    else if (choice == 3){
        cout << "Result: " << mul_fun(a, b) << endl;
    }
    else if(choice == 4){
         cout << "Result: " << div_fun(a, b) << endl;    }
    else {
        cout<<"Invalid choice" ;
    }
    return 0;

}