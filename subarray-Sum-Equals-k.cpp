#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int> &nums , int k){
    
        int n = nums.size();
        int count = 0;
        vector<int> prefixSum(n , 0);
        prefixSum[0] = nums[0];

        for(int i = 1; i < n ;i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }

        unordered_map<int,int> m;
        for(int j = 0 ; j < n; j++){
            if(prefixSum[j]==k) count++;

            int val = prefixSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }

            if(m.find(prefixSum[j])==m.end()){
                m[prefixSum[j]] = 0;
            }
            m[prefixSum[j]]++;
        }
        return count;
}

int main(){
    vector<int> nums = {1,1,1};
    int k = 2;
    cout<<"the number of subarray present in the array whose sum is equals to k is : "<<subarraySum(nums,k)<<endl;

    return 0;
}