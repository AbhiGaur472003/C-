#include<iostream>
using namespace std;
class Parent{
public:
    void Display1(){
        cout<<"Calling Parent class"<<endl;
    }
};
class Child1:public Parent{
public:
    void Display2(){
        cout<<"Calling Child1 Class"<<endl;
    }
};
class Child2:public Parent{
public:
    void Display3(){
        cout<<"Calling Child2 Class"<<endl;
    }
};
class Subchild:public Child1,public Child2{
public:
    void Display4(){
        cout<<"Calling Subchild Class"<<endl;
    }
};
int main(){
    Subchild a;
    a.Display1();//Diamond Problem...ambiguity
}
