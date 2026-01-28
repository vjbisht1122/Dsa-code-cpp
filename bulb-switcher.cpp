// this is problem number 319 in leet code where we have to toggle (if switch then switch off and if switch off then switch on) the button in each iteration and return the number of bulbs when the iteration is over when iteration is less then n 
#include<iostream>
using namespace std;
int main(){
    int bulbs;
    cout<<"Enter the number of bulbs :"<<endl;
    cin>>bulbs;
    cout<<"The number of bulbs on after the iterations are : "<<sqrt(bulbs)<<endl;
    //the main logic behind using this sqrt() function as each time when all the bulbs are iterated at the end always the perfect squareRoot numbered bulb are always on for example(1,4(2x2),9(3x3),16(4x4),25(5x5)) so we used this function
    return 0;
}