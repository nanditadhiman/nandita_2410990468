#include<iostream>
using namespace std;
namespace Hello{
    void greet(){
        std::cout<<"Hi,NANDITA";
    }
}

int main(){
    Hello::greet();
    return 0;
}