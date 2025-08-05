// encapsulation code
#include<iostream>
using namespace std;
class Bank{
    private:
    double balance;
    public:
    void deposit(double amount){
        balance+=amount;
    }
    double getbalance(){
        return balance;
    }

};
int main(){
    Bank b;
    b.deposit(500);
    cout<<b.getbalance()<<endl;
    return 0;
}