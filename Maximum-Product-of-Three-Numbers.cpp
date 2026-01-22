//in this question we have to return the maximum product from 3 numbers from the arrays 
#include<iostream>
#include<vector>
using namespace std;

int maxProd(vector<int> &nums){
    int m = nums.size();
    sort(nums.begin(),nums.end());
    int maxprod1 = (nums[m-1]*nums[m-2]*nums[m-3]);
    int maxprod2 = (nums[0]*nums[1]*nums[m-1]);
    return max(maxprod1,maxprod2);
}
int main(){
    vector<int> nums = {1,3,4,5,-100,-99,-8};
    cout<<"the maximum product is : "<<maxProd(nums)<<endl;
    return 0;
}