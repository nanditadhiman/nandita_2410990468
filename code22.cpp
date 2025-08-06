#include<iostream>
using namespace std;
class Base{
    public:
    int pub=1;
    protected:
    int pro=2;
    private:
    int pri=3;
};
//inheritance
class Derived: public Base{
    public:
    void accessbasemembers(){
        cout<<"Public:"<<pub<<endl; //accessible
        cout<<"Protected:"<<pro<<endl;  //accessible

    }
};
int main(){
    Base b;
    cout<<b.pub<<endl; //ok
    // cout<<b.pro<<endl; //error
    // cout<<b.pri<<endl;  //error
    return 0;
}