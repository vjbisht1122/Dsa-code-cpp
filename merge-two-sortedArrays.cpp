#include<iostream>
#include<vector>
using namespace std;

void mergeArray(vector<int> &nums1 , int m , vector<int> &nums2 ,int n){
    //Time complexity for this code is O(m+n)
    int index = m+n-1;
    int i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[index] = nums1[i];
            index--,i--;
        }else{
            nums1[index]= nums2[j];
            index-- , j--;
        }
    }
    while(j>=0){
        nums1[index] = nums2[j];
        index--,j--;
    }
}

int main(){
    vector<int> nums1 = {1,3,5,0,0,0};
    vector<int> nums2 = {2,4,6};
    int m=3,n=3;

    mergeArray(nums1,m,nums2,n);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";

    }
    return 0;

}