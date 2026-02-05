#include<iostream>
#include<vector>
using namespace std;

vector<int> constructTransformedArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);
    for(int i=0;i<n;i++){
    int newIndex =  (i + nums[i] % n + n) % n;
    result[i] = nums[newIndex];
    }
    return result;
}

int main(){
    vector<int> nums = {3,-2,1,1};
    vector<int> res = constructTransformedArray(nums);
    for(int i = 0;i<nums.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}