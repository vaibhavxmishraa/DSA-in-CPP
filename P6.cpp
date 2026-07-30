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