#include<iostream>
using namespace std;
class Base{
private:
    int a1;
protected:
    int a2;
public:
    int a3;
    void Display1(){
        cout<<"Class Base"<<endl;
    }
};
class Child1:public Base{
private:
    int b1;
protected:
    int b2;
public:
    int b3;
    void Display2(){
        a2=4;
        a3=9;
        cout<<"Class Child1"<<endl;
        cout<<"Accessing Protected Variable of Base Class in Child1 Class: "<<a2<<endl;
        cout<<"Accessing Public Variable of Base Class in Child1 Class: "<<a3<<endl;
    }
};
class Child2:private Base{
private:
    int c1;
protected:
    int c2;
public:
    int c3;
    void Display3(){
        a2=8;a3=7;
        cout<<"Class Child2"<<endl;
        cout<<"Accessing Protected Variable of Base Class in Child2 Class: "<<a2<<endl;
        cout<<"Accessing Public Variable of Base Class in Child2 Class: "<<a3<<endl;
    }
};
class Child3: protected Base{
private:
    int d1;
protected:
    int d2;
public:
    int d3;
    void Display4(){
        a2=1;a3=9;
        cout<<"Class Child3"<<endl;
        cout<<"Accessing Protected Variable of Base Class in Child3 Class: "<<a2<<endl;
        cout<<"Accessing Public Variable of Base Class in Child3 Class: "<<a3<<endl;
    }
};
class SubChild:public Child3{
private:
    int e1;
protected:
    int e2;
public:
    int e3;
    void Display5(){
        a2=7;a3=4;
        cout<<"Class SubChild"<<endl;
        cout<<"Accessing Protected Variable of Base Class in SubChild Class: "<<a2<<endl;
        cout<<"Accessing Public Variable of Base Class in SubChild Class: "<<a3<<endl;
    }
};
int main(){
    Child1 a;
    Child2 b;
    Child3 c;
    SubChild d;
    //b.a3=5;   Can not Access member of base class due to private modifier
    //c.a3=7;   Can not Access member of base class due to protected modifier
    //d.a3=6;
    a.Display1();
    //b.Display1();     Can not Access member of base class due to private modifier
    //c.Display1();     Can not Access member of base class due to protected modifier
    //d.Display1();
    a.Display2();
    b.Display3();
    c.Display4();
    d.Display5();

}
