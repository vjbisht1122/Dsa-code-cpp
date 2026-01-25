#include<iostream>
#include<vector>
using namespace std ;

int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = nums[k-1]-nums[0];
        for(int i = 0 ; i+k<=n;i++){
            ans = min(ans,nums[i+k-1]-nums[i]);
        }
        return ans;
}

int main(){
    vector<int> nums = {9,4,1,7};
    int k = 2;
    cout<<"the Minimum difference is :"<<minimumDifference(nums,k);
    return 0;
}