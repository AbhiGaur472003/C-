#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t curr_time;
    curr_time = time(0);

    tm *a=localtime(&curr_time);
    
    int c;
    cout<<"Enter your choice:"<<endl;
    cout<<"1.Year\n2.Month\n3.Day"<<endl;
    cin>>c;
    switch(c){
         case 1: cout<<"Year - ";
                 cout<<1900+a->tm_year<<endl;
                 break;
         case 2: cout<<"Month - ";
                 cout<<1+a->tm_mon<<endl;
                 break;
         case 3: cout<<"Day - ";
                 cout<<a->tm_mday<<endl;
                 break;  
         default: cout<<"Invalid"<<endl;
    }
	return 0;
}
