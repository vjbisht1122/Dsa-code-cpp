#include<iostream>
using namespace std;

int main(){
    int mat[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    int sum = 0;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(i==j){
                sum += mat[i][j];
            }
            else if(j == col-i-1){
                sum += mat[i][j];
            }
        }
    }
    cout<<"the diagonal sum of the matrix is : "<<sum<<endl;
    return 0;
}