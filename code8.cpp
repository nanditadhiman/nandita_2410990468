//POINTERS 
#include<iostream>
using namespace std;
int main(){
    int number=10;
    int *ptr=&number;
    cout<<"the value of number is:"<<number<<endl;
    cout<<"the address of number is: "<<ptr<<endl;
    cout<<"the value at ptr is :"<<*ptr<<endl;
    return 0;
}