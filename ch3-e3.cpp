//Calculate the area and circumference of circle via user input
#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.1416; //declare const for pi

    cout << "Enter the circle's radius: "; //prompt user
    double radius = 0; //set variable to zero
    cin >> radius; // set radius to user input

    cout << "A = " << pi * radius * radius << endl; //area equation
    cout << "C = " << 2 * pi * radius << endl; //circ equation

    return 0;
}
