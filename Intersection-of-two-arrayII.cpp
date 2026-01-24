// in this question we have to return the value which are similar in both the arrays 
#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> num1,vector<int> num2){
    int m = num1.size();
    int n = num2.size();
    vector<int> result;
    int i = 0, j = 0;
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    while(i<m && j<n){
        if(num1[i]==num2[j]){
            result.push_back(num1[i]);
            i++;
            j++;
        }
        else if(num1[i]<num2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return result;
}

int main(){
    vector<int> num1 = {1,3,5,4,6};
    vector<int> num2 = {2,3,4,6,7};
    vector <int> res = intersection(num1,num2);
    cout<<"common number in the array are : ";
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;


}
