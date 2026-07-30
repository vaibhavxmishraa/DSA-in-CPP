//Take 3 positive integers input and print the greatest of them
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<< "Enter 3 Numbers : ";
    cin>> x >> y>> z;
    if (x >= y and x >= z) cout<<x << " is greatest";
    else if (y >= z) cout<< y << " is greatest";
    else cout<< z << " is greatest";
}