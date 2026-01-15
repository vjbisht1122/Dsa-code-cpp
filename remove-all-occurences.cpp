#include<iostream>
#include<string>
using namespace std;

string occurences(string s , string part){

    while(s.length() > 0 && s.find(part)<s.length()){
        s.erase(s.find(part) , part.length());
    }
    return s;
}

int main(){
    string s = "abbabcbabc";
    string part = "ab";

    string si = occurences(s,part);
    cout<<si;
    return 0;
}