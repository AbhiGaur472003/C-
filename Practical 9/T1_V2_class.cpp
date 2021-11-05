#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int year;
    char sec;
    int marks;
    static int sum;
    void Set(string name,int year,char sec,int marks){
        this->name=name;
        this->year=year;
        this->sec=sec;
        this->marks=marks;
    }
    void Add(){
        sum=sum+this->marks;
    }
};
int Student::sum;
int main(){
    Student s[3];
    s[0].Set("Abhishek",2020,'d',59);
    s[0].Add();
    s[1].Set("Deepak",2019,'d',77);
    s[1].Add();
    s[2].Set("Ram",2018,'d',95);
    s[2].Add();
    cout<<Student::sum;
}
