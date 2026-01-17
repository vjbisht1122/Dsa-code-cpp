#include<iostream>
#include<string>
using namespace std;

bool isPermut(int freq1[],int freq2[]){
    for(int i = 0;i<26 ; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}
bool checkPermut(string s1,string s2){
    int freq[26]={0};
    for(int i=0 ; i<s1.length();i++){
        freq[s1[i]-'a']++;
    }
    int windSize=s1.length();
    for(int i=0;i<s2.length();i++){
        int windIdx = 0;
        int idx = i;
        int windFreq[26]={0};
        while(windIdx<windSize && idx<s2.length()){
            windFreq[s2[idx]-'a']++;
            idx++;
            windIdx++;
        }
        if(isPermut(freq,windFreq)){
            return true;
        }
    }
    return false;
}

int main(){
    string s1 = "bc";
    string s2 = "uhsakabijf";

    if(checkPermut(s1,s2)){
    cout<<"Present"<<endl;
    }else{
    cout<<"not Present"<<endl;
    }

    return 0;
}