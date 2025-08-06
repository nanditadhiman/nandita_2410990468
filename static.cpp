#include<iostream>
// using namespace std;
// class Demo{
//         public:
//         static int counter;
//         Demo(){
//             counter++;
//         }
//     };
// int Demo::counter=0;
// int main(){
//     Demo a,b,c;
//     cout<<"total objects created:"<<Demo::counter<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
class Math{
    public:
    static int square(int x){ ///function
        return x*x;
    }
};
int main(){
    cout<<"square of 5 is:"<<Math::square(5)<<endl;
    return 0;
}