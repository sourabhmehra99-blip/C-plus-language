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

class father{
    public:
    void money(){
        cout<<"Father gives home"<<endl;

    }
};
class mother{
    public:
    void love(){
        cout<<"Mother gives love"<<endl;
    }
};
class chlid :public father,public mother{
    public:
    void play(){
        cout<<"Child plays circket"<<endl;
    }
};

int main(){
    chlid c1;
    c1.money();
    c1.love();
    c1.play();
    return 0;
}