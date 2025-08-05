//hard problem
#include<iostream>
using namespace std;
class Bankaccount{
    private:
    int balance=0;
    public:
    void deposit(int amount){
        balance=balance+amount;
    }
    void withdraw(int amount){
        balance=balance-amount;
    }
    int getbalance(){
        return balance;
    }
};
int main(){
    Bankaccount a; //creating object1
    Bankaccount b; //creating object2
    a.deposit(1000); //depositing 1000 in a 
    b.deposit(500); //deposiitng 500 in b
    a.withdraw(200); //withdrawing 200 from a 
    b.withdraw(200); //withdrwaing 200 from b also
    cout<<"BALANCE IN A ACCOUNT :"<<a.getbalance()<<endl;
    cout<<"BALANCE IN B ACCOUNT:"<<b.getbalance()<<endl;
    return 0;
}