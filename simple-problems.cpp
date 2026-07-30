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
}
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
//Check the entered alphabet is Capital or not
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<< "Enter an alphabet : ";
    cin>> ch;
    int ch_int = (int)ch;
    if (ch_int > 64 and ch_int < 80){
        cout<<"A capital letter is entered!";

    }else if (ch_int> 96 and ch_int< 113){
        cout<<"A small letter is entered";

    }else cout<< "You have entered other than alphabet!";
    
}
//Given a point (x,y), write a program to find out if it lies in the 1st Quardrant, 2nd Quardrant, 3rd Quadrant, 4th quadrant, on the x-axis, y-axis or at origin.
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout<< "Enter the values of x and y : ";
    cin>> x >> y;
    if (x == 0 && y == 0) {
        cout << "The point (" << x << ", " << y << ") is at the origin.\n";
    } 
    else if (x == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the y-axis.\n";
    } 
    else if (y == 0) {
        cout << "The point (" << x << ", " << y << ") lies on the x-axis.\n";
    } 
    else if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in the 1st Quadrant.\n";
    } 
    else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in the 2nd Quadrant.\n";
    } 
    else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in the 3rd Quadrant.\n";
    } 
    else {
        cout << "The point (" << x << ", " << y << ") lies in the 4th Quadrant.\n";
    }
}
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
