#include<iostream>
using namespace std;

int secondLargest(int a[],int n){
    int largest = INT_MIN;
    int secLargest = INT_MIN;

    if(n<2){
        return -1;
    }

    for(int i=0;i<n;i++){
        if(a[i]>largest){
            secLargest = largest;
            largest=a[i];
        }
        else if(a[i]>secLargest && a[i] != largest){
            secLargest = a[i];
        }
    }
    return secLargest;
}

int main(){
    int a[]={2,4,1,5,6,7};
    int n=6;

    int seconLargest= secondLargest(a,n);
    cout<<"Second largest element in the array is:"<<seconLargest<<endl;
    return 0;
}