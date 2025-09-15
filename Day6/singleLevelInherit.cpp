#include<iostream>

using namespace std;

class Account{
    float bonus = 2000;
    public:
    int getBonus(){
        return bonus;
    }
};

class Programmer: public Account{
    public:
    float monthly_Salary = 5000;
    void calculateSalary(){
        cout<<"Total Salary: "<<monthly_Salary+getBonus();
    }
};

int main(){
    Programmer p1;
    cout<<"Total Salary: "<<p1.monthly_Salary+p1.getBonus();
    return 0;
}