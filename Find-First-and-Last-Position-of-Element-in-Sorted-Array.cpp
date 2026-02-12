//Find-First-and-Last-Position-of-Element-in-Sorted-Array.cpp
#include<iostream>
#include<vector>
using namespace std;

 int fir(vector<int> &nums , int n , int target){
        int first = -1;
        int s = 0 , e = n-1;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target){
                first = mid;
                e = mid-1;
            }else if(nums[mid]<target){
                s = mid+1;
            }else{
                e = mid - 1;
            }
        }
        return first;
    }

    int last(vector<int> &nums , int n , int target){
        int last = -1;
        int s = 0 , e = n-1;
        while(s<=e){
            int mid =(s+e)/2;
            if(nums[mid]==target){
                last = mid;
                s = mid+1;
            }else if(nums[mid]<target){
                s = mid+1;
            }else{
                e = mid - 1;
            }
        }
        return last;
        
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int firstOccurence = fir(nums,n,target);
        if(firstOccurence==-1){
            return{-1,-1};
        }

        int lastOccurence = last(nums,n,target);
        return{firstOccurence , lastOccurence};
        
    }

    int main(){
        vector<int> nums = {5,7,7,8,8,10};
        int target = 8;
        vector<int> s = searchRange(nums,target);
        for(int x:s){
            cout<<x<<" ";
        }
        cout<<endl;
        return 0;

    }