#include<iostream>
#include<vector>
using namespace std;

bool searchMat(vector<vector<int>> &mat , int target){
    int m = mat.size();
    int n = mat[0].size();
    int row = 0 , col = n-1;

    while(row<m && col>=0){
        if(mat[row][col] == target){
            return true;
        }
        else if(mat[row][col]>target){
            col--;
        }
        else row++;
    }

    return false;
}

int main(){
    vector<vector<int>> mat = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 32;
    if(searchMat(mat,target)){
        cout<<"Number is present !"<<endl;
    }
    else  cout<<"Number is not present !"<<endl;

    return 0;
}