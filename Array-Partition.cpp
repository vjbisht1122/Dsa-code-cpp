//in this question we have to give the max sum provided by the partition of two group of the array for example
//arr = [1,3,2,4] =>  [(1,3)(2,4)] => [min(1,3)+min(2,4)]=3 , [min(1,4)+min(2,3)]=3 , [min(1,2)+min(3,4)]=4 this is the max value provided by the partition of group so the answer is 4....
#include<iostream>
#include<vector>
using namespace std;

int partitioning(vector<int> &num){
    sort(num.begin(),num.end());
    int m = num.size();
    int sum = 0;
    for(int i = 0 ; i<m ; i+=2)//why we are making i = i+2 because for next iteration we want the 2 index element from the array must added to the value inside sum variable
    {
        sum+=num[i];
    }
    return sum;
}
int main(){
    vector<int> num = {1,3,4,5,6,7,8,2,4};
    cout<<"the max sum provided by partitioning is : "<<partitioning(num)<<endl;
    return 0;   
}