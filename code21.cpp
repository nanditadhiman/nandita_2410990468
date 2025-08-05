//practise problem 
#include<iostream>
using namespace std;
struct Address{
    string city;
    int pincode;
};
class Student{
    public:
    string name;
    Address address;

};
int main(){
    Student *s= new Student;
    s->name="nandita";
    s->address.city="ambala city";
    s->address.pincode=134003;
    cout<<"NAME:"<<s->name<<endl;
    cout<<"CITY:"<<s->address.city<<endl;
    cout<<"PINCODE:"<<s->address.pincode<<endl;
    delete s;
    return 0;
}
