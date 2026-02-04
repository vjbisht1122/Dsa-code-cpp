//in this problem we have to covert the upper case characters to lower case characters in string

#include<iostream>
#include<string>
using namespace std;

string tolowercase(string s){

    for(int i = 0 ; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }

    return s;



}

int main(){
    string s = "MYnameIsVIJAY";
    cout<<"The lower case letters are : "<<tolowercase(s)<<endl;
    return 0;
}