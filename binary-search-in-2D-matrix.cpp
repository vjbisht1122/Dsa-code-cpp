#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> &mat , int target,int row){

    int n = mat[0].size();
    int st = 0 , end = n-1;

    while(st<=end){
        int mid = st + (end-st)/2;
        if(mat[row][mid]==target){
            return true;
        }
        else if(mat[row][mid]<target){
            st = mid+1;
        }
        else end = mid-1;
    }

    return false;

}
bool searchInMat(vector<vector<int>> &mat , int target){
    int m = mat.size();
    int n = mat[0].size();

    int stRow = 0 , endRow = m-1;

    while(stRow<=endRow){
        int midRow = stRow + (endRow - stRow)/2;

        if(target>=mat[midRow][0] && target <= mat[midRow][endRow]){
            return search(mat , target , midRow);
        }
        else if(target>mat[midRow][n-1]){
            stRow = midRow + 1;
        }
        else endRow = midRow - 1;
    }   

    return false;


}

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 12;
    if(!searchInMat(mat , target)){
        cout<<"the number is not present in the matrix! "<<endl;
    }
    else cout<<"the Number is present "<<endl;

    return 0;
}