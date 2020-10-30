#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declare variable for int
    int inputNumber;

    cout << "Enter an integer: ";

    //store int from user input
    cin >> inputNumber;

    //Text (string input)
    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;

    cout << inputName << " entered " << inputNumber << endl;

    return 0;
}
