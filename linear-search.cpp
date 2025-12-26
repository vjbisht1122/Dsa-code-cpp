#include<iostream>
using namespace std;
 int linearSearch(int a[],int n,int target){
    for(int i = 0; i<n; i++){
        if(a[i]==target){
            return i;
        }
        
    }
    return -1;

 }

 int main(){
    int a[]={2,3,5,7,1};
    int n=5;
    int target = 7;

    int linear = linearSearch(a,n,7);
    cout<<"the value is found at index:"<<linear<<endl;

    return 0;

 }