#include<iostream> 
#include<string>
#include<vector>

using namespace std;
//using character array
void reverseStringC(vector<string> &s){
    int n = s.size()-1;
    int st = 0 , end = n;

    while(st<end){
        swap(s[st++],s[end--]);
    }
}

int main(){
    vector<string> s = {"h","e","l","l","o"};
    reverseStringC(s);
    for(int i = 0 ; i<=s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    //using string via stl
    string str = "I am Vijay";
    reverse(str.begin(),str.end());
    cout<<str<<" ";
    return 0;
}