#include <iostream>

using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    string a;
    for(int i=s.size()-1;i>=0;i--){
        a.push_back(s[i]);
    }
    if(s==a){
        cout<<"String is Palindrome"<<endl;
    }
    else{
        cout<<"String is not Palindrome"<<endl;
    }
    return 0;
}
