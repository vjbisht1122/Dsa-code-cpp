#include<iostream>
#include<vector>
using namespace std;

int sumOfMaxSubArray(vector<int> &nums){
    int maxSum=INT_MIN;
    int currSum=0;
    for(int val: nums){
        currSum += val;
        maxSum= max(maxSum,currSum);

        if(currSum<0){
            currSum = 0;
        }

        

    }
    return maxSum;
}

int main(){
    vector<int> nums ={1,2,-2,3,4,5,-1,6,-5};
    int size=9;
    int subArr= sumOfMaxSubArray(nums);
    cout<<"max sum of subArrays are:"<<subArr<<endl;
    return 0;
}