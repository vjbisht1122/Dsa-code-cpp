//Given an array of integers nums and an integer k, an element nums[i] is considered good if it is strictly greater than the elements at indices i - k and i + k (if those indices exist). If neither of these indices exists, nums[i] is still considered good.
//Return the sum of all the good elements in the array.
#include<iostream>
#include<vector>
using namespace std;

int GoodSum(vector<int> &nums , int k){
    int n = nums.size();
    int totalSum = 0;

    for(int i = 0; i < n ; i++){
        bool isGood = true;

        if(i-k>=0){
            if(nums[i]<=nums[i-k]){
                isGood = false;
            }
        }
         if(i+k<n){
            if(nums[i]<=nums[i+k]){
                isGood = false;
            }
        }

        if(isGood){
            totalSum+=nums[i];
        }

    }
    return totalSum;

}

int main(){
    vector<int> nums = {1,3,2,1,5,4};
    int k = 2;
    cout<<"The total sum is : "<<GoodSum(nums,k)<<endl;
    return 0;
}