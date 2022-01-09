// Output ----->   terminate called after throwing an instance of 'char'

// ANS-->Because we are throwing exception of char instance but in the program
//       there is no catch block which can catch char instance and there is 
//       also no default catch block which can catch every type of exception.
//       So when an exception is thrown and not caught anywhere , then the 
//       program terminates abnormally.



#include<iostream>
using namespace std;
int main(){
    try{
        throw 'a';
    }
    catch(int a){
        cout<<"Caught"<<a;
    }
    return 0;
}