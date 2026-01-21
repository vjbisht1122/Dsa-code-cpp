#include<iostream>
#include<string>
using namespace std;

bool isCapital(char &ch){
    if(ch == 'a' || ch=='e' ||ch=='i' ||ch=='a' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
        return true;
    }
    else {
        false;
    }
}
string rev(string &s){
    int n = s.length();
    int i=0;
    int j=n-1;
    while(i<j){
        if(!isCapital(s[i])){
            i++;
        }
        else if(!isCapital(s[j])){
            j--;
        }
        else{
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    return s;

}
int main(){
    string s = "IceCreAm";
    string si = rev(s);
    cout<<si<<endl;
    return 0;

}