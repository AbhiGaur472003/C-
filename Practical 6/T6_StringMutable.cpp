#include<iostream>
using namespace std;
int main(){
    string s="Graphic";
    cout<<"String Before changing: "<<s<<endl;
    cout<<"Address of s Before changing: "<<&s<<endl;
    s[0]='J';
    cout<<"Address of s After changing: "<<&s<<endl;
    cout<<"String After changing: "<<s<<endl;
    return 0;
}
