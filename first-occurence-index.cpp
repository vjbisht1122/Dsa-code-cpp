//in this problem we have to return the index of first occurence in the string and the target string is also given for example => str = "sadofsad" target = "sad" it will return 0 because the first letter of the first occurence is starts from index 0

#include<iostream>
#include<string>
using namespace std;

int firstOccurence(string str, string target){
    int m = str.length();
    int n = target.length();

    for(int i = 0 ; i<=m-n ; i++){
        if(str.substr(i,n)==target){
            return i ;
        }
    }
    return -1;
}
int main(){
    string str = "ofabcsad";
    string target = "sad";
    cout<<"the index of first occurence is : "<<firstOccurence(str,target);
    return 0;

}
