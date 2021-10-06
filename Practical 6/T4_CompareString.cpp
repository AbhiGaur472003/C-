#include <iostream>

using namespace std;
int main(){
    string s,a;
    cout<<"Enter the first string: ";
    getline(cin,s);
    cout<<"Enter the second string: ";
    getline(cin,a);
    if(s==a){
        cout<<"Strings are equal"<<endl;
    }
    else{
        cout<<"Strings are not equal"<<endl;
    }
}
