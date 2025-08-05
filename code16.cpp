#include<iostream>
using namespace std;

namespace Lib1{
    void calculate(){
        std::cout<<"Calculating from Lib1\n";
    }
}
namespace Lib2{
    void calculate(){
        std::cout<<"Calculating from Lib2";
    }
}
int main(){
    Lib1::calculate();
    Lib2::calculate();
    return 0;
}








