//Take positive integer input and tell if it is divisible by 5 or 3.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<< "Enter a number : ";
    cin>> x;
    if (x%5 == 0 or x%3 == 0){
        cout<< "Number is divisible by 3 or 5";
    }
    else{
        cout<< "Number is not divisible by 3 or 5";
    }
}