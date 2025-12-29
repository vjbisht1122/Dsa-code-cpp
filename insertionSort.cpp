#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){//time complexity => O(n^2)

    for(int i=1;i<n;i++){
        int cur=arr[i];
        int pre=i-1;

        while(pre>=0 && arr[pre]>cur){
            arr[pre+1] = arr[pre];
            pre--;
        }

        arr[pre+1]=cur;
    }


}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={5,4,1,2,3};
    int n=5;

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}