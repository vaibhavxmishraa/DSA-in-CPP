//Take positive integer input and tell if it is a four digit number or not
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter a Number = ";
    cin>> a;
    if(a > 1000 && a < 10000){
        cout<<"Number have 4 digits";

    }else{
        cout<< "Number hasn't 4 digits";
    }

}