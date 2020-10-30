#include <iostream>
using namespace std;

//3 global int
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers ()
{
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    //Mult and store in var
    multiplicationResult = firstNumber * secondNumber;

    //display results
    cout << "Displaying from MultiplyNumbers(): ";
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}
int main()
{
    cout << "This program will help you multiply two numbers" << endl;

    //Call the func
    MultiplyNumbers();

    cout << "Displaying from main(): ";

    //Compile work
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;

    return 0;
}
