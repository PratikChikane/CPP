#include<iostream>
using namespace std;

class A{
    int c;
    public:
    int a;
    protected:
    int b;
    public:
    void display(){
        cout<<"in displsay of A\n";

    }
};
class B:private A{
    public :
    int c;
    public:
    void show(){
        display();
        cout<<a<<b;
    }
};
class C:private B{
    public:
    void show()
	{
	   // display(); not allowed
		//cout<< a<<b; not allowed
		cout<<c;
	}
};
int main()
{
	B bobj;
	bobj.show();
}
