//Take 3 positive integers input and tell if they can be the sides of a triangle or 
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<< "Enter three numbers : ";
    cin>> x >> y >> z;
    if(x+y > z and x + z > y and y + z > x){
        cout<< "These sides can be the sides of a triangle!";
    }else cout<< "These sides can't be the sides of a triangle";
}