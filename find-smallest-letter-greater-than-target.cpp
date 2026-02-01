//in this code we have to return the minimum element in the array which is greater than the given target value 
#include<iostream>
#include<vector>
using namespace std;

char greaterChar(vector<char> &letters,char target){
    for(char c : letters){
        if(c > target){
            return c;
        }
    }
    return letters[0];
}
int main(){
   vector<char> letters = {'c','f','g'};
   char target = 'z';
   cout<<"the min character from the letter which is greater then the target value is : "<<greaterChar(letters,target)<<endl;

   return 0;
}