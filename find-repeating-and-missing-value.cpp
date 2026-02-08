#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

vector<int> missing(vector<vector<int>> &nums){
    vector<int> answer;
    unordered_set <int> s;
    int n = nums.size();
    int a,b;
    int expSum = 0 , actualSum = 0;

    for(int i=0;i<n;i++){
        for(int j = 0 ; j<n ;j++){
            actualSum+=nums[i][j];
            if(s.find(nums[i][j])!=s.end()){
                a = nums[i][j];
                answer.push_back(a);
            }
            s.insert(nums[i][j]);
        }

    }

    expSum = (n*n) * (n*n+1)/2;
    b = expSum + a - actualSum;
    answer.push_back(b);

    return answer;

}

int main()
{
    vector<vector<int>> nums = {{9,1,7},{8,9,2},{3,4,6}};
    vector <int> ans = missing(nums);
    cout<<"the repeating and missingvalue is : ";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}