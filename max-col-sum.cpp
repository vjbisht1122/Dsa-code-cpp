#include<iostream>
#include<vector>
using namespace std ;

int maxRowSum(int mat[][3],int row,int col){
    int maxSum = INT_MIN;
    for(int i = 0; i < col ; i++){
        int rowSum = 0;
        for(int j = 0 ; j < row ; j++){
            rowSum += mat[j][i];
        }
        maxSum = max(rowSum,maxSum);
    }

    return maxSum;

}

int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    cout<<"The max Sum of row is : "<<maxRowSum(mat,row,col);
    return 0;
}