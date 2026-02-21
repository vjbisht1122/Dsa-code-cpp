#include<iostream>
#include<vector>
using namespace std;

void subsets(vector<int> &a , vector<int> &ans , int i){

     if(i==a.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
     }

     ans.push_back(a[i]);
     subsets(a,ans,i+1);
     ans.pop_back();
     subsets(a,ans,i+1); 
}

int main(){
    vector<int> a = {1,2,3};
    vector<int> ans ;

    subsets(a,ans,0);
    return 0;
}