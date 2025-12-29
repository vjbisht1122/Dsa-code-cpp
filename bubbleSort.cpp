#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){//tc=>O(n^2) not an optimized approach 
    bool isSwap=false;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }

        }
        if(!isSwap){
            return;
        }
    }
}

void printArray(int arr[],int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }

}

int main(){
    int arr[]={1,3,4,5,2};
    int size=5;
    bubbleSort(arr,size);
    printArray(arr,size); 

    return 0;
}
