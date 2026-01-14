#include<iostream>
#include<vector>
using namespace std;

void nextPermutation(vector <int> &nums){
    int pvt = -1;
    int n = nums.size();
    
    for(int i=n-2 ; i>=0 ;i--){
        if(nums[i]<nums[i+1]){
            pvt=i;
            break;
        }
    }
        if(pvt==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }

        for(int i = n-1 ; i>=0; i--){
            if(nums[pvt]<nums[i]){
                swap(nums[i],nums[pvt]);
                break;
            }
        }

        int i = pvt+1 , j = n-1;
        while(i<=j){
            swap(nums[i++],nums[j--]);
        }
    
}

int main(){
    vector <int> nums = {1,2,3,4,5};
    nextPermutation(nums);

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}