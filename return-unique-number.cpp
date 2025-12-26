#include<iostream>
#include<vector>

using namespace std;

int unique(vector<int> &nums){

    int ans = 0;

    for(int val: nums){

        ans = ans ^ val;

    }
    return ans;

}

int main(){
    vector<int> nums={1,1,3,4,4,5,5};

    int uniqueNumber = unique(nums);
    cout<<"Unique number is:"<<uniqueNumber<<endl;


    return 0;
}