#include<iostream>
using namespace std;

int gcd(int a ,int b){
    while(a>0 && b>0){
        if(a>b){
            a%=b;
        }else b%=a;
    }
    if(a==0){
        return b;
    }
    return a;
}

int main(){
    int a = 6;
    int b = 12;
    cout<<"GCD is : "<<gcd(a,b)<<endl;

    return 0;
}