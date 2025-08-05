//accessing class memebers
#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    int pages;
};
int main(){
    Book b;
    b.title="1984";
    b.pages=321;
    cout<<b.title<<endl;

    Book *ptr=new Book;
    ptr->title="C++ prime";
    ptr->pages=900;
    cout<<ptr->title<<endl;
    delete ptr;
    return 0;

}