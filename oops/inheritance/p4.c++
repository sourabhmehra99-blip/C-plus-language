// multilevel inheritance

#include<iostream>
using namespace std;

class grandfather{
    public:
    void land(){
        cout<<"grandfather land "<<endl;
    }
};
class father: public grandfather{
    public:
    void home(){
        cout<<"father home "<<endl;
    }
};
class son :public father{
    public:
    void bike(){
        cout<<"son bike"<<endl;
    }
};

int main(){
    son b1;
    b1.bike();
    b1.home();
    b1.land();
    return 0;
}