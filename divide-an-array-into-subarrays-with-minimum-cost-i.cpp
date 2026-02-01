// //You are given an array of integers nums of length n.

// The cost of an array is the value of its first element. For example, the cost of [1,2,3] is 1 while the cost of [3,4,1] is 3.

// You need to divide nums into 3 disjoint contiguous subarrays.

// Return the minimum possible sum of the cost of these subarrays.

#include<iostream>
#include<vector>
using namespace std;

int minSum(vector<int> &nums){
    sort(nums.begin()+1,nums.end()); // nums.begin()+1 in this the array will sort from index 1 basically ignores nums[0]
    return nums[0]+nums[1]+nums[2];
}
int main(){
    vector<int> nums = {10,3,4,1};
    cout<<"the minimum possible sum of the cost of these subarrays is : "<<minSum(nums)<<endl;
    return 0;
}