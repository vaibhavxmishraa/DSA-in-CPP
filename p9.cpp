//Take 3 numbers input and find least of them
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<< "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if (a <= b and a <= c) cout<< a << " is least of all";
    else if (b <= c) cout << b << " is least of all ";
    else cout<< c << " is least of them";

}