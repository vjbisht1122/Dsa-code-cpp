#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector <int>& nums ,int target){
    vector<int> ans;
    int n= nums.size();
    int i=0;
    int j=n-1;

    while(i<j){
        int pairsum = nums[i] + nums[j];

        if(pairsum > target){
            j--;
        }
        else if(pairsum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;

        }
    }
    return ans;

}
int main(){
    vector<int> nums = {1,2,3,5,6};
   
    int target = 8;
    vector<int> sum= pairSum(nums, target);
    cout<<"the values are at "<<sum[0]<<" and "<<sum[1]<<endl;
    return 0;

}