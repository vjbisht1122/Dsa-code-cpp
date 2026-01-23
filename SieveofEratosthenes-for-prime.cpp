#include<iostream>
#include<vector>
using namespace std;

int prime(int n){
    vector<bool> isPrime(n+1 , true);
    int count = 0;
    for(int i=2;i<n;i++){
        if(isPrime[i]){
            count++;

            for(int j=i*2;j<n;j=i+j){
                isPrime[j]=false;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"enter the last number in which you want to get prime numbers : "<<endl;
    cin>>n;
    cout<<"the numbers are : "<<prime(n)<<endl;
    return 0;
}