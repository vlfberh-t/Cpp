#include <iostream>
using namespace std;

enum CardinalDirections
{
    North = 25,
    South,
    East,
    West
};

int main()
{
    cout << "Displaying directions and their symbolic values" << endl;
    cout << "North: " << North << endl;
    cout << "South: " << South << endl;
    cout << "East: " << East << endl;
    cout << "West: " << West << endl;

    CardinalDirections windDirection = South;
    cout << "Variable windDirection = " << windDirection << endl;

    return 0;
    
    //initial value 25 given to north, enumerates through west (28)
    //"South" assigned to v windDirection, output is enumeration integer for v South (26)
}
