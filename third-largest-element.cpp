#include<iostream>
#include<vector>
using namespace std;

int secLarg(int num[],int n){
    int larg = INT_MIN;
    int seclar = INT_MIN; 
    int thilar = INT_MIN; 
    for(int i=0;i<n;i++){
        if(num[i]>larg){
            thilar = seclar;
            seclar = larg;
            larg = num[i];
        }
        else if(num[i]>seclar && num[i]!=larg){
            thilar = seclar;
            seclar = num[i];
        }
        else if(num[i]>thilar && num[i]!=seclar){
            thilar = num[i];
        }

    }
    return (thilar==INT_MIN) ? -1 : thilar;
  
    

}

int main(){
    int num[] = {1,3,4,2,5};
    int n = 5;
    cout<<"the second largest element in the list is : "<<secLarg(num,n);

    return 0;
}
