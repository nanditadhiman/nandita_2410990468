#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal eating"<<endl;
    }
};
class Dog: public Animal{
    public:
    void bark(){
        cout<<"dog barking"<<endl;
    }
};
int  main(){
    Dog monika;
    monika.eat();
    monika.bark();
    return 0;
}