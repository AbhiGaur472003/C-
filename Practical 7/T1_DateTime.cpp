#include <iostream>
using namespace std;

int main()
{
    int c;
    cout<<"Enter your choice:"<<endl;
    cout<<"1.Year\n2.Month\n3.Day"<<endl;
    cin>>c;
    switch(c){
         case 1: cout<<"Year - 2021"<<endl;
                 break;
         case 2: cout<<"Month - October"<<endl;
                 break;
         case 3: cout<<"Day - 13"<<endl;
                 break;  
         default: cout<<"Invalid"<<endl;
    }

    return 0;
}

