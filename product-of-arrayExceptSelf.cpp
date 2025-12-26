#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int> &arr){
    int n=arr.size();
    //space complexity=O(1)
    //time complexity=O(n)

    vector<int> ans(n,1);

    for(int i=1;i<n;i++){
       ans[i]*=arr[i-1] ;
    }

    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=arr[i+1];
        ans[i]*=suffix;
    }

    return ans;
}

int main(){
    vector <int> arr={1,2,3,4};
    int n=4;

    vector<int> pro= product(arr);
    cout<<"Product of arrays except self are:";
    for(int x: pro){
        cout<<x<<" ";
    }
    return 0;

}