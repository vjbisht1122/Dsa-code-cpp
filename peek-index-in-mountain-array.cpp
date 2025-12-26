#include<iostream>
#include<vector>
using namespace std;

int peekIndex(vector<int>& arr, int n){
    int st=1, ed=n-2;
    while(st<=ed){
        int mid = st+(ed-st)/2;

        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }

        if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }
        else{
            ed=mid-1;
        }
    }
}

int main(){
    vector <int> arr={5,6,7,8,9,4,3,2,1};
    int n=9;

    int peek = peekIndex(arr,n);
    cout<<"Index of peek element is :"<<peek<<endl;
    return 0;

}
