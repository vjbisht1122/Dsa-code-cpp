#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copyn = n;
    int sumOfCubes = 0;
    while(n!=0){
        int digit = n%10;
        sumOfCubes += (digit*digit*digit);
        n /= 10;
    }
    if(sumOfCubes==copyn){
        return true;
    }
    else{
        return false;
    } 
}

int main(){
    int n = 153;
    if(isArmstrong(n)){
        cout<<"is an Armstrong Number";
    }
    else  {
        cout<<"not an Armstrong Number";
    }

    return 0;
}