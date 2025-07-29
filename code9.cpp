// functions in c++ 
// call by value 
// SWAPPING TWO VARIABLES
#include<iostream>
using namespace std;
void swap(int x,int y);
int main(){
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<"the value of x:"<<x<<" "<<"the original value of y:"<<y<<endl;
    return 0;
}
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"the swapped value of x:"<<x<<" "<<"the swapped value of y:"<<y<<endl;
}