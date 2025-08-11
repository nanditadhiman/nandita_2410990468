//MULTIPEL
#include<iostream>
using namespace std;
class Father{
    public:
    void g(){
        cout<<"father of child"<<endl;
    }
};
class Mother{
    public:
    void p(){
        cout<<"mother of child"<<endl;
    }
};
class Child:public Father,public Mother{
    public:
    void c(){
        cout<<"child of mother and father"<<endl;
    }
};
int main(){
    Child nandita;
    nandita.g();
    nandita.p();
    nandita.c();
    return 0;

}