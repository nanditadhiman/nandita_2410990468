#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
};
int main(){
    string name;
    cin>>name;
    int rollno;
    cin>>rollno;
    student s1;
    s1.name=name;
    s1.rollno=rollno;
    cout<<"Name :"<<s1.name<<endl;
    cout<<"Roll number:"<<s1.rollno<<endl;
    return 0;
}
