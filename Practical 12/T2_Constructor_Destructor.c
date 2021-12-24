#include<iostream>
using namespace std;
class Base{
public:
    int a1;
    Base(){
        a1=30;
        cout<<"Calling Class Base constructor"<<endl;
    }
    ~Base(){
        cout<<"Calling Class Base destructor"<<endl;
    }
    void Display1(){
        cout<<"Class Base variable value: "<<a1<<endl;
    }

};
class Child:public Base{
public:
    int b1;
    Child(int x){
        b1=x+20;
        cout<<"Calling Class Child1 constructor"<<endl;
    }
    ~Child(){
        cout<<"Calling Class Child destructor"<<endl;
    }
    void Display2(){
        Display1();
        cout<<"Class Child variable value: "<<b1<<endl;
    }
};
class SubChild:public Child{
public:
    int c1;
    SubChild(int x):Child(x){
        c1=x+10;
        cout<<"Calling Class SubChild constructor"<<endl;
    }
    ~SubChild(){
        cout<<"Calling Class SubChild destructor"<<endl;
    }
    void Display3(){
        Display2();
        cout<<"Class SubChild variable value: "<<c1<<endl;
    }
};
class SubSubChild:public SubChild{
public:
    int d1;
    SubSubChild(int x): SubChild(x){
        d1=x;
        cout<<"Calling Class SubSubChild constructor"<<endl;
    }
    ~SubSubChild(){
        cout<<"Calling Class SubSubChild destructor"<<endl;
    }
    void Display4(){
        Display3();
        cout<<"Class SubSubChild variable value: "<<d1<<endl;
    }
};
int main(){
    cout<<"Flow of constructor: "<<endl;
    SubSubChild obj(48);
    cout<<endl;
    obj.Display4();
    cout<<endl;
    cout<<"Flow of destructor: "<<endl;
    return 0;
}
