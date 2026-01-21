#include<iostream>
#include<string>
using namespace std;

bool isCap(char ch){
    if(ch>='A' && ch<='Z'){
        return true;
    }
    else return false;
}
bool isCapital(string s){
    int n = s.length();
    int capital = 0;
    for(char c : s){
        if(isCap(c)){
            capital++;
        }
    }
    if(capital==0 || capital==n || (capital==1 && isCap(s[0]))){
        return true;
    }

    return false;

}
int main(){
    string s = "iSasA";
    if(isCapital(s)){
        cout<<"true"<<endl;
    }
    else cout<<"false"<<endl;

    return 0;
}