#include<iostream>
using namespace std;
int main(){
    int a=23;
    float b=45.89;
    char c='A';
    bool d=true;
    short f=2;
    double g=23.45;
    long doble h=345.9876;
    wchar_t i='B';
    cout<<"Size of Integer: "<<sizeof(a)<<endl;
    cout<<"Size of Float: "<<sizeof(b)<<endl;
    cout<<"Size of Character: "<<sizeof(c)<<endl;
    cout<<"Size of Boolean: "<<sizeof(d)<<endl;
    cout<<"Size of Long: "<<sizeof(e)<<endl;
    cout<<"Size of Short: "<<sizeof(f)<<endl;
    cout<<"Size of Double: "<<sizeof(g)<<endl;
    cout<<"Size of Long double: "<<sizeof(h)<<endl;
    cout<<"Size of Wide Char: "<<sizeof(i)<<endl;
    return 0;
}
