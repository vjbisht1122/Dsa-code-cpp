#include<iostream>
using namespace std;
int largest(int a[],int n){
    int max = a[0];
    for(int i=1;i<=n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;

}
int main(){
    int a[]={1,3,5,2,4};
    int n=5;
    int maxi = largest(a,n);
    cout<<"the largest element in the array is:" << maxi <<endl;
    return 0;
}
