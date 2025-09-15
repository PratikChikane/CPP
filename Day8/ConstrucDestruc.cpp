#include<iostream>
using namespace std;

class Student{
    public:
    Student(){
        cout<<"Constructor is called\n"<<endl;

    }
    ~Student(){
        cout<<"Destructor is called\n"<<endl;
    }
};
int main(){
    Student s1,s2,s3,s4;
}