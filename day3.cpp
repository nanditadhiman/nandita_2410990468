#include<iostream>
using namespace std;
double totalbankbalance;

void deposit(double &account,double amount){
    account=account+amount;
    totalbankbalance+=amount;
}
void withdraw(double &account,double amount){
    if(amount<account){
        account-=amount;
        totalbankbalance-=amount;
    }
    else{
        cout<<"not sufficient balance in your account";
    }
}
void display(double account,double amount){
    cout<<totalbankbalance<<endl;
    cout<<account<<endl;
    cout<<amount<<endl;
}
int main(){
    cin>>totalbankbalance;
    double account;
    cin>>account;
    double amount;
    cin>>amount;
    deposit(account,amount);
    withdraw(account,amount);
    display(account,amount);
    return 0;
}
