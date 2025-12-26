#include<iostream>
#include<vector>
using namespace std;

int singleEle(vector<int>& arr,int size){
    int st=0, ed=size-1;
    while(st<=ed){
        int mid = st+(ed-st)/2;

        if(mid==0 && arr[mid]!=arr[mid+1]) return arr[mid];

        if(mid==size-1 && arr[size-1]!=arr[size-2]) return arr[mid];

        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }

        if(mid%2==0){//even side
            if(arr[mid-1]==arr[mid]){
               ed = mid-1;
            }else{
                st = mid+1;
            }
        }else{

            if(arr[mid-1]==arr[mid]){
                st=mid+1;
            }else ed = mid-1;

        }
    }
    return -1;

}

int main(){
    vector<int> arr={1,2,2,3,3,5,5,6,6};
    int size = 9;

    int single = singleEle(arr,size);
    cout<<"the single element in the array is :"<<single<<endl;
    return 0;
}