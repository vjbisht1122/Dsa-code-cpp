// Problem Statement  :

// A prime number is a number which is divisible by one and itself. Also a number is called a good  prime number if the sum of its digits is a prime number. For example a number 23 is a good prime number because the sum of 2 and 3 ( 2+3=5) is 5 which is a prime number. You are given an integer K. Your task is to find the kth good prime number that is greater than a provided number N.

// For example , 232 is a good prime number since the sum of all digits is 7 which is a prime number whereas 235 is not a good prime number.

// Input format :

// The first line contains an integer N.
// The next line contains an integer K.
// Output format :
// A single integer which is a Kth good prime number that is greater than a provided number N.

// Constraints :

// 1<=N<=10^5
// 1<=K<<=10^5
// Sample Input 1:
// 4  4

// Sample Output 1:
// 12

// Explanation :
// Good prime numbers starting from 4 are 5,7,11(1+1=2 which is prime number),12(1+2=3 which is prime number),14(1+4=5 which is a prime number) and so on. Because the sum of digits of an individual number is a prime number And 4 th good prime number is 12 in this series.Hence the output is 12. 

// Sample Input 2:
// 17  5

// Sample Output 2:
// 29

// Explanation :

// Good prime numbers starting from 17 are 20,21,23,25,29…and the 5th prime number is 29.Hence the output is 29.

#include<iostream>
using namespace std;

bool isPrime(int n){
   
    if(n<=1){
        return false;
    }
    for(int i = 2 ; i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int goodPrime(int n,int k){
    int count = 0;
    
    while(true){
        n++;
        int num = n;
        int sum = 0;
    while(num>0){
        int digit = num%10;
        sum += digit;
        num/=10;
    }
    if(isPrime(sum)){
        count++;
        if(count==k){
            return n;
        }
    }
   

    }

   
}

int main(){
    int n = 4 ;
    int k = 4;
    cout<<"the good prime number at the given kth value is :"<<goodPrime(n,k)<<endl;
    return 0;
}