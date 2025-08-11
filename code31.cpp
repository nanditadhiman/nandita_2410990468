#include<iostream>
using namespace std;
class Shape{
    public:
    void shape(){
        cout<<"the shape is rectangle and circle"<<endl;
    }
};
class Circle:public Shape{
    public:
    void circle(){
        cout<<"it is a circle"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void rectangle(){
        cout<<"it is a recatangle"<<endl;
    }
};
int main(){
    Circle c1;
    c1.circle();
    Rectangle r1;
    r1.rectangle();
    return 0;
}