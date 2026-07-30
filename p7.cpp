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