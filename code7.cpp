//POINTERS
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter value of x:";
    cin>>x;
    int *ptr=&x;
    int *ptrr=&x;
    cout<<"the adress of x: "<<ptr<<endl;
    cout<<"the value at x is:"<<*ptrr<<endl;
    return 0;
}