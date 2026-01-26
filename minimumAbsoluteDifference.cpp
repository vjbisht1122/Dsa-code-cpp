// in this problem we have to find the difference of the element and we have to print the list of numbers whose are having minimum differnce in asceding order in ssorted manner
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<vector<int>> minDifference(vector<int> arr){
    int n = arr.size();
    int minDiff = INT_MAX;
    vector<vector<int>> res ;
    sort(arr.begin(),arr.end());
    for(int i = 1 ; i<n;i++){
        int diff = arr[i]-arr[i-1];

        if(diff<minDiff){
            minDiff=diff;
            res.clear();
            res.push_back({arr[i-1],arr[i]});
        }else if(diff==minDiff){
            res.push_back({arr[i-1],arr[i]});
        }

    }
    return res;
}
int main(){
    vector<int> arr = {4,2,1,3};
   vector< vector<int>> ans = minDifference(arr);
   for(auto pair:ans){
    cout<<"["<< pair[0]<<","<<pair[1] <<"]";
   }
    return 0;
}