// heriarical inheritance

#include<iostream>
using namespace std;

class vehicle{
    public:
    void autovehicle(){
        cout<<"it is a automobile vehicle"<<endl;
    }
};

class car : public vehicle{
    public:
    void start(){
        cout<<"Car is start"<<endl;
    }
};
class truck : public vehicle{
    public :
    void drive(){
        cout<<"truck is drive by driver"<<endl;
    }
};
class bike : public vehicle{
    public :
    void ride(){
        cout<<"biker start rides"<<endl;
    }
};

int main()
{
    car c1;
    truck t1;
    bike b1;
    c1.autovehicle();
    c1.start();

    t1.autovehicle();
    t1.drive();

    b1.autovehicle();
    b1.ride();
return 0;
}