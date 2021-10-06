#include <iostream>
#include<algorithm>
using namespace std;

void Reverse(string s){
    cout<<"\nReversing string using ";
    cout<<"user define Reverse function: ";
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    string s="Graphic Era";
    cout<<"String is: "<<s<<endl;
    Reverse(s);
    reverse(s.begin(),s.end());
    cout<<"\nReversing string using in";
    cout<<" build reverse function: "<<s<<endl;

    return 0;
}

