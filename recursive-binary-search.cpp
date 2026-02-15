#include<iostream>
#include<vector>
using namespace std;

int helper(vector<int> nums , int target , int s , int e){
    if(s<=e){
        int mid = s + (e-s) / 2 ;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            return helper(nums,target,mid+1,e);
        }
        else{
             return helper(nums,target,s,mid-1);
        }
    }

    return -1;

}


int binary(vector<int> nums , int target){
    
    return helper(nums,target , 0 , nums.size()-1);
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,8};
    int target = 15;
    cout<<"the number is present at index : "<<binary(nums,target)<<endl;

    return 0;
}