//password strength checker
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pass;
    cout<<"enter your string:";
    cin>>pass;
    int len=pass.length();
    int n=0;
    int upper=0;
    int lower=0;
    int digit=0;
    int specialcharcater=0;

    while(n<len){
        if(pass[n]>='A' && pass[n]<='Z'){
            upper++;
        }
        else if(pass[n]>='a' &&pass[n]<='z'){

            lower++;
        }
        else if(pass[n]>='0'&&pass[n]<='9'){
            digit++;
        }
        else{
            specialcharcater++;
        }
        n++;
    }
    cout<<"number of uppercase:"<<upper<<endl;
    cout<<"number of lowercase:"<<lower<<endl;
    cout<<"number of digit:"<<digit<<endl;
    cout<<"number of special character:"<<specialcharcater<<endl;
    if(len<6){
        cout<<"WEAK PASSWORD YOU HAVE ENTERED";
    }
    else if(len>=6 &&len<=9){
        cout<<"MEDIUIM PASSWORD YOU HAVE ENTERED";
    }
    else{
        cout<<"STRONG PASSWORD YOU HAVE ENETRED";
    }
    return 0;
}