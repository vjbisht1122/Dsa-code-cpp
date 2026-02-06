#include<iostream>
using namespace std;

int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    bool found = false;
    int target = 19;
    for(int i = 0 ;i<row;i++){
        for(int j = 0;j<col;j++){
            if(mat[i][j]==target){
                cout<<"found at index : "<<"["<<i<<","<<j<<"]"<<endl;
                found = true;
            }
           
        }
         if(found) break;
    }
    if(!found){
        cout<<"NOT FOUND!!";
    }
    return 0;
}