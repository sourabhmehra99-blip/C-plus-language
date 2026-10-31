#include<iostream>
using namespace std;
// class and object 
// class info{
//     public:
//     void name(){
//         cout<<"Sourabh Mehra"<<endl;
//     }
// };

// int main(){
//     info s1; 
//     s1.name();
//     return 0;
// }

// multiple inheritance

class father {
    public:
    string name;
    void money(){
        cout<<"Father gave money to "<< name <<endl;
    }
};
class mother{
    public:
    string name;
    void love(){
        cout<<"Mother give love to "<< name <<endl;
    }
};
class child :public father,public mother{
    public:
    void play(){
        cout<<name<<" play every day"<<endl;
    }
};
int main(){
    child C1;
    C1.name = "akash";
    C1.money();
    C1.love();
    C1.play();
    return 0;
}