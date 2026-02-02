// in this problem we have to find the square root of a given number example => num = 4 output => 2 
#include<iostream>
using namespace std ;

int Issqrt(int num){
    return sqrt(num);
}

int main(){
    int num ;
    cout<<"Enter the number you want to find the square root of : ";
    cin>>num;
    cout<<"Square root of the number is : "<<Issqrt(num)<<endl;

    return 0;
}