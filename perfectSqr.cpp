//in this problem we have a bool function which returns true if the given number is squareroot of some number ex1 num = 16 output true , ex2 num = 19 false I am solving this question without using namy prebuit function 
#include<iostream>
using namespace std;

bool isPerfectSqr(int n){
    for(long long int i = 1 ; i <= n ; i++ ){
        if(i*i==n){
            return true;
        }
    }
    return false;
}

int main(){
    int n ;
    cout<<"enter a number to check: ";
    cin>>n;

    if(!isPerfectSqr(n)){
        cout<<"Not a Perfect square"<<endl;
    }else cout<<"Perfect square"<<endl;

    return 0;
}