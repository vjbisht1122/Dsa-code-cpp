#include<iostream>
#include<vector>

using namespace std;

void dnf(vector<int> &arr){
    int size=arr.size()-1;
    int low=0,mid=0,high=size;

    while(mid<=high){

        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++,low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;

        }

    }
}

int main() {
    vector<int> arr = {2, 0, 2, 1, 1, 0};

    dnf(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}