#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &nums , int n){
    if(n==0 || n==1) return true;

    return nums[n-1]>=nums[n-2] && isSorted(nums,n-1);
}

int main(){
    vector<int> nums = {1,2,6,4,5,6};
    if(isSorted(nums,nums.size())){
        cout<<"the array is sorted!!"<<endl;  
    }
    else cout<<"the array is not sorted!!"<<endl;

    return 0;
}