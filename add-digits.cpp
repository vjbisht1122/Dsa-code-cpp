//in this problem we have to add all the digits of the num given in the question and we have to add all the values until it reduced to only one digit
// example 38 ==> 11 ==> 2 so the answer will be 2 

#include<iostream>
using namespace std;

int addDigit(int num){
    int sum = 0;
    for(int i = 0 ; num>0 ; i++ ){
        int digit = num % 10;
        sum += digit;
        num /= 10;

        if(num == 0 && sum>=9){
            num = sum;
            sum = 0;
        }
    }
    return sum;
}

int main(){
    int num ;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    cout<<"The single digit answer is :"<<addDigit(num);
    return 0;
}