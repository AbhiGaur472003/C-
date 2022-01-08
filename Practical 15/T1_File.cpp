#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file1;
    file1.open("file1.txt");
    string s;
    cout<<"Enter the content Added to file:"<<endl;
    getline(cin,s);
    file1<<s;
    file1.close();
    ifstream file2;
    file2.open("file1.txt");
    cout<<"\nDisplaying the content of file:"<<endl;
    while(getline(file2,s)){
        cout<<s;
    }
    file2.close();
}