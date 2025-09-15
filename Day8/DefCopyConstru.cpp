#include<iostream>
using namespace std;

// implicit copy constructor calling
class Sample{
    int id;
    public:
    void init(int x){
        id=x;
    }
    void display(){
        cout<<endl<<"ID="<<id;
    }
};
int main(){
    Sample obj1;
    obj1.init(10);
    obj1.display();

    //implicit copy cons calling
    Sample obj2(obj1);
    obj2.display();
    return 0;

}