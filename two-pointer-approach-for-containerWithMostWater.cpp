#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxWater(vector<int> height){
    int lp=0;
    int rp=height.size()-1;
    int maxHeight=0;
    while(lp<rp){
        int width=rp-lp;
        int ht = min(lp,rp);
        int currWater = width*ht;
        maxHeight= max(maxHeight, currWater);
        height[lp]<height[rp] ? lp++ : rp--;
    }
    return maxHeight;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int water = maxWater(height);
    cout<<"Maximum amount of water container can store is: "<<water<<endl;
    return 0;
}
