#include<iostream>
#include<vector>
using namespace std;

int rotatedSortedArray(vector<int>& arr,int target,int n){

    int st=0;
    int ed=n-1;
    while(st<=ed){
        int mid = st+(ed-st)/2;

        if(target==arr[mid]){
            return mid;
        }

        if(arr[st]<=arr[mid]){//left sorted
            if(arr[st]<=target && target<=arr[mid]){//finding between start and mid
                ed=mid-1;
            }else{
                st=mid+1;
            }
      }else{
        if(arr[mid]<=target && target<=arr[ed]){
            st=mid+1;
        }else{
            ed=mid-1;
        }
      }
    }
}

int main(){
    vector <int> arr={6,7,0,1,2,3,4,5};
    int n=8; 
    int target = 4;

    int rotatedArray = rotatedSortedArray(arr,target,n);
    cout<<"target found at : "<<rotatedArray<<endl;
    return 0;

}