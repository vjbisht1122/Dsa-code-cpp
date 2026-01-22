//in this problem we have to give the index of the maximum element which is twice as big of the other element in the array and if the number doesn't exist then return -1
#include<iostream>
#include<vector>
using namespace std; 

int dominant(vector<int> &nums){
    int n = nums.size();
    int firstMaxNum = nums[0];
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(nums[i]>firstMaxNum){
            firstMaxNum = nums[i];
            ans = i ;
        }
    }
    nums[ans]=0;
    int secMaxNum = nums[0];
    for(int i = 0 ; i < n ; i++){
        if(nums[i]>secMaxNum){
            secMaxNum = nums[i];
        }
    }
    if(firstMaxNum>=secMaxNum*2){
        return ans;
    }
    else return -1;
}

int main(){
    vector<int> nums={3,4,1,2};
    cout<<"the index of the the largest element is : "<<dominant(nums)<<endl;
    return 0;
}