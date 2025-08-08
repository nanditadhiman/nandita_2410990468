#include<iostream>
using namespace std;
class A{
    int val;
    public:
    A():val(9){

    }
    int getVal() const {return val;}
};
int main(){
    const A a;
    cout<<a.getVal();
}