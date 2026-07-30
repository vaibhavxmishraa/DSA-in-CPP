//Take input of an positive integer and find out that number have 3 digit or not
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a positive integer number: ";
    cin>>x;
    if (x >= 0 ){
        if(x <= 999){
            cout<< x << " is three digit number";
        }        
    }else{
        cout<< x << " is not a three digit number";
    }
    // if(x > 99 and x < 1000){
    //     cout<< x << " is a 3 digit number";

    // }else {
    //     cout<< x << " is not a 3 digit number ";

    // }
}