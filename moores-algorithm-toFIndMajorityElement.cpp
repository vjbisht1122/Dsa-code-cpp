#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> &nums){
    int frequency=0;
    int ans=0;
    for(int val=0;val<nums.size();val++){
        if(frequency==0){
            ans=nums[val];
        }
        if(ans==nums[val]){
            frequency++;
        }
        else{
            frequency--;
        }
    }
    return ans;
}

int main(){
    vector <int> nums={1,2,2,1,1,1};
    int majorElement = majorityElement(nums);
    cout<<"Majority element is "<<majorElement<<endl;

    return 0;

}