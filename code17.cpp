#include<iostream>
using namespace std;
class Book{
    public:
    std::string title;
    int page;
    void nameprint(){
        cout<<"my name is nandita";
    }
};
int main(){
    Book mybook; //created object
    mybook.title="the habbit";
    mybook.page=319;
    mybook.nameprint();
    return 0;
}