#include<iostream>

using namespace std;

class Account{
    private:
    double balance;
    public:
     double getBal(){
        return balance;
        void setBalance(double amt){
            balance = balance + amt;

        }
    }
};