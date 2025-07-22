#include<iostream>
#include <cmath>
using namespace std;
int power(int base,int exp){
    return (int)pow(base,exp);
}
int factorial(int m){
    if(m<0){
        return -1;
    }
    if(m==1){
        return 1;
    }
    if(m==0){
        return 1;
    }
    return m* factorial(m-1);
}
int prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=n;i++){
        n%i==0;
        return false;
    }
    return true;
}
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int base,exp;
    cout<<"enter base:";
    cin>>base;
    cout<<"enter exponential(exp):";
    cin>>exp;
    cout<<"POWER:"<<power(base,exp)<<endl;
    int m;
    cout<<"enter m:";
    cin>>m;
    cout<<"FACTORIAL:"<<factorial(m)<<endl;
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"PRIME:"<<prime(n)<<endl;
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    cout<<"GCD:"<<gcd(a,b)<<endl;
    return 0;
}