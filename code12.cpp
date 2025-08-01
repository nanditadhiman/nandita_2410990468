#include<iostream>
using namespace std;
class Circle{
    public:
    double radius;
};
int main(){
    Circle *c1= new Circle();
    c1->radius = 4.2; //first object of class circle
    cout<<"the radius of circle is:"<<c1->radius<<endl;
    delete c1;
    return 0;
  
}