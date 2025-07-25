// POINTERS
#include<iostream>
using namespace std;
int main(){
    int x=4;
    int *ptr=&x;
    int *pr=&x;
    cout<<"the adreess of x is :"<<ptr<<endl;
    cout<<"the value at x is :"<<*pr<<endl;
    return 0;
}