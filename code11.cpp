//structures in c++
#include<iostream>
using namespace std;
struct Book{
    int page;
    double price;

};
int main(){
    Book b1;
    b1.page=100;
    b1.price=300;
    cout<<"the book b1 has:"<<b1.page<<"pages"<<"and it is of price:"<<b1.price;
    return 0;
}