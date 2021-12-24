#include<iostream>
using namespace std;
class Mammals{
public:
    void Display1(){
        cout<<"I am mammal"<<endl;
    }
};
class MarineAnimals{
public:
    void Display2(){
        cout<<"I am marine animal"<<endl;
    }
};
class BlueWhale:public Mammals,public MarineAnimals{
public:
    void Display3(){
        cout<<"I belong to both categories: Mammals as well as Marine Animals"<<endl;
    }
};
int main(){
    Mammals a;
    cout<<"Calling Mammals class by Mammals class object"<<endl;
    a.Display1();
    cout<<endl<<endl;
    MarineAnimals b;
    cout<<"Calling MarineAnimals class by MarineAnimals class object"<<endl;
    b.Display2();
    cout<<endl<<endl;
    BlueWhale c;
    cout<<"Calling BlueWhale class by BlueWhale class object"<<endl;
    c.Display3();
    cout<<endl<<endl;
    cout<<"Calling Mammals class by BlueWhale class object"<<endl;
    c.Display1();
    cout<<endl<<endl;
    cout<<"Calling Mammals class by BlueWhale class object"<<endl;
    c.Display2();
    cout<<endl<<endl;
}
