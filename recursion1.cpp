#include<iostream>
using namespace std;

void recursive(int n){
    if(n==1){
        cout<<"1\n";
        return ;
    }
    cout<<n<<" "<<endl;
    recursive(n-1);
}

void table(int n ,int i){
    
    if(i>10){
        
        return;
    }
    cout<<n*i<<" ";
  
    table(n,i+1);

}

void square(int n){
    if(n>10) return;
    cout<<n*n<<" ";
    square(n+1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

// sum of n numbers

int sumNum(int n){
    if(n<1) return 0 ;

    return n+sumNum(n-1);
}

int main(){
   cout<<sumNum(10)<<endl;
    return 0;
}
