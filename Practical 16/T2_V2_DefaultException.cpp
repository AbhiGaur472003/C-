// Output ---->   Default Exception ...
// ANS-->Because when we throw Exception of char instance then it will firstly find 
//       where the char instance is catching but their is no catch block for char.
//       catch(...) this will catch every type of exception.
//       that's why catch(...) block will be executed.


#include<iostream>
using namespace std;
int main(){
    try{
        throw 'a';
    }
    catch(int a){
        cout<<"Caught"<<a;
    }
    catch(...){
        cout<<"Default Exception\n";
    }
    return 0;
}

