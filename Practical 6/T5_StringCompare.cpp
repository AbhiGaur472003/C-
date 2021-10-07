#include<iostream>
using namespace std;
int main(){
    string s="Abhi";
    string a="Abhi";
    string p="Graphic";
    string r="Era";
    string q="Abhishek";
    string o="Abh";
    int b=s.compare(a);
    int c=s.compare(p);
    int d=s.compare(r);
    int e=s.compare(q);
    int f=s.compare(o);
    cout<<"Comparing "<<s<<" and "<<a<<" : "<<b<<endl;
    cout<<"Comparing "<<s<<" and "<<p<<" : "<<c<<endl;
    cout<<"Comparing "<<s<<" and "<<r<<" : "<<d<<endl;
    cout<<"Comparing "<<s<<" and "<<q<<" : "<<e<<endl;
    cout<<"Comparing "<<s<<" and "<<o<<" : "<<f<<endl;
    return 0;
}
