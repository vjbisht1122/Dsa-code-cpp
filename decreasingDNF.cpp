#include<iostream>
#include<vector>

using namespace std;
void decreasingDNF(vector<int> &nums){
    int size=nums.size()-1;
    int l=0,m=0,h=size;

    while(m<=h){

        if(nums[m]==2){

            swap(nums[l],nums[m]);
            l++,m++;

        }
        else if(nums[m]==1){
            m++;
        }
        else{
            //nums[m]==0

            swap(nums[m],nums[h]);
            h--;

        }
    }
}

int main(){
    vector <int> nums= {2,1,0,0,1,2,1};
    decreasingDNF(nums);

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}