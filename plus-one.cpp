//in this code we have to add +1 to the last digit in the array and if the last digits gets some carry value then we have the insert it to the previous element of the same number 
#include<iostream>
#include<vector>
using namespace std; 

 vector <int> plusOne(vector<int> &num){
    int n = num.size()-1;
    int carry = 1;
    for(int i = n ; i>=0 ; i--){
        int sum = num[i] + carry ;
        num[i] = sum%10;
        carry = sum/10;
    }

    if(carry==1){
        num.insert(num.begin(),1);
    }
    return num;
}
int main(){
    vector<int> num = {9,9,9,9,9,9};
    vector<int> result = plusOne(num);
    cout<<"updated values are: ";
    for(int x : num){
    cout<<x<<" ";
   }

    return 0;

}