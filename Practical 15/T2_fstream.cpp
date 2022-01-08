#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file1;
    file1.open("file2.txt",fstream::in | fstream::out | fstream::app);
    string s;
    char c,d;
    int a=2;
    cout<<"Enter the content of file(Two Lines)::"<<endl;
    while(a--){
        getline(cin,s);
        file1<<s<<"\n";
    }
    file1.seekg (0, file1.beg);
    cout<<"\nDisplaying the content of file::"<<endl;
    while(file1>>noskipws>>c){
        cout<<c;
    }
    file1.close();
    file1.open("file2.txt",fstream::in | fstream::out | fstream::app);
    file1.seekg (0, file1.end);
    cout<<"\nEnter the content to append in file::"<<endl;
    getline(cin,s);
    file1<<s;
    file1.seekg (0, file1.beg);
    cout<<"\nDisplaying the content of file after append::"<<endl;
    int countc=0,countw=0,countl=1;
    while(file1>>noskipws>>c){
        cout<<c;
        if(c!=' '){
            countc++;
            d=c;
        }
        else{
            if(d!=' ')
                countw++;
            d=c;
        }
        if(c=='\n'){
            countl++;
            countw++;
        }
    }
    if(c!=' ')
        countw++;
    cout<<"\n\nTotal number of characters in file(Excluding space):: "<<countc<<endl;
    cout<<"Total number of words in file:: "<<countw<<endl;
    cout<<"Total number of lines in file:: "<<countl;
    file1.close();
}