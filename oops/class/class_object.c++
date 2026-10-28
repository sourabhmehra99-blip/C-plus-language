#include<iostream>
using namespace std;

// class Car{          // the class
//     public:         // Acces specifier
//     string brand;   // Attribute (string variable)
//     string model;
//     int year;       // Attribute (int variable)
// };

// int main()
// {
//     Car c1;
//     c1.brand = "BMW";
//     c1.model = "X5";
//     c1.year = 1999;

//     Car c2;
//     c2.brand = "FORD";
//     c2.model = "MUSTANG";
//     c2.year = 1969;

//     cout<<"Car brand : "<<c1.brand<<endl;
//     cout<<"Car model : "<<c1.model<<endl;
//     cout<<"year model : "<<c1.year<<endl;

//     cout<<"Car brand : "<<c2.brand<<endl;
//     cout<<"Car model : "<<c2.model<<endl;
//     cout<<"year model : "<<c2.year<<endl;

//     return 0 ;
// }

// // output <--
// // Car brand : BMW
// // Car model : X5
// // year model : 1999
// // Car brand : FORD
// // Car model : MUSTANG
// // year model : 1969
// // }

// program 2

class Book{
    public:
    string title;
    string author;
    int year;
    void display(){
        cout<<"book title : "<<title<<endl;
        cout<<"book author : "<<author<<endl;
        cout<<"published year : "<<year<<endl;
    }
};

int main(){
    Book B1;
    B1.author = "Alia";
    B1.title = "Rise";
    B1.year = 2021;
    B1.display();
    return 0;
} 