//Take integer input and tell if its magnitude is smaller thhan 69 or not.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>> a;
    if(a < 0 and -1*a > 69){
        cout<< "Magnitude of "<< a << "   is greater than 69"<< endl;

    }else if(a > 0 and a > 69){
        cout<< "Magnitude of "<< a << " is greater than 69"<< endl;
    }else cout<< "Magnitude of "<< a << " is less than 69"<< endl;
}