// P1. Write a C++ program for Valid age for Driving
#include<iostream>
using namespace std;
int main (){
  int age;
  cout<< "Enter age : ";
  cin>> age ;
  if (age >= 18){
    cout<<"You can drive!"<<endl;
  }
  else{
    cout<<"You can't drive"<<endl;
  }
}
//P2. Take positive integer input and tell iff it is odd or even
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a number : ";
  cin>> num;
  if (num % 2 == 0){
    cout<<"Even Number";
  }
  else{
    cout<<"Odd Number";
  }
}
// P3. Take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main (){
int num;
cout<< "Enter a number : ";
cin>>num;
if(num % 5 == 0){
cout<<"Number is divisible by 5";
}else{
cout<< "Number is not divisible by 5";
}
}
//P4. Take inteer input and print the absolute valuse off that integer
#include<iostream>
using namespace std;
int main(){
  int num;
cout<<"Enter the Number : ";
cin>> num;
if (num >= 0){
cout<< num;
}else if (num < 0){
cout<< -1*num ;
}
}
//P5. Take a real number input and check if it is an integer or not
#include<iostream>
using namespace std;
int main(){
float x;
cout<< "Enter the  number : ";
cin>> x;
int y = (int)x;
if(x == y){
cout<< x << "is integer";
}else
{
cout<< x << " isn't integer";
}
}

//P6. If cost price and selling price of an item is input through the keyboard
//write a program to determine whether the seller has made profit or Loss
//or no profit no loss. Also determine how much profit he made or loss he incured.
#include<iostream>
using namespace std;
int main(){
    int CostPrice, SellingPrice;
    cout<<"Enter the price of the item : ";
    cin >> CostPrice ;
    cout<<"Enter the selling price of the item : ";
    cin>> SellingPrice;
    int pl = SellingPrice - CostPrice;
    if(pl > 0 ){
        cout<< "Profit = " << pl;
    }else if (pl == 0){
      cout<< "No profit No loss";
    }
      
    else{
        cout<< "Loss = "<< -pl;
    }
    
}
//Take length and breadth of rectangle as input and write a program to find whether the area of rectangle is greater than its perimeter.
#include<iostream>
using namespace std;

int main(){
    int length, breadth, area, perimeter;
    cout<< "Enter the length of the rectangle : ";
    cin>> length;
    cout<< "Enter the breadth of the rectangle : ";
    cin >> breadth;
    area = length * breadth;
    cout<< "Area of rectangle is "<< area << endl;
    perimeter = 2*(length + breadth);
    if (perimeter > area){
        cout<< "Perimeter is greater than area!";

    }
    else if (perimeter < area){
        cout<< "Perimeter is Less than area!";
    }else 
    {
        cout<<"Area and Perimeter both are equal";
    }
    }
