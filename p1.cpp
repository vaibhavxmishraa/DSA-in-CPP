#include<iostream>
#include<climits>

using namespace std;
int main(){
    int a;
    cout<<"Enter a number : "<< endl;
    cin>> a;
    if (a % 5 == 0 && a % 3 == 0){
        cout<< "Anuj" << endl;}
    else if(a%5 == 0){
        cout<< "Kartikay" << endl;
    }else if (a % 3 == 0){
        cout<< "Sakshi"<< endl;
    }
    else if (a % 5 != 0 && a % 3 != 0){
        cout<< "Hitesh" << endl;
    }

}
