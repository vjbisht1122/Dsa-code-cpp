#include<iostream>
#include<vector>
using namespace std;

 bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0, end = n-1;
        while(st<=end){
            int mid = (st+end)/2;

            if(nums[mid]==target) {
                return true;
            }
            if(nums[mid]==nums[st]){
                st++; 
                continue;
            }

            
             if(nums[mid]>=nums[st]){
                if(target>=nums[st] && target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }else{
                if(target>=nums[mid] && target<=nums[end]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
        return false;
    }

int main(){
    vector<int> nums ={2,5,6,0,0,1,2};
    int target = 9;
    if(search(nums,target)){
        cout<<"Number is present "<<endl;
    }else{
        cout<<"Number is not present "<<endl;
    }

    return 0;
}