#include <iostream>
using namespace std;

int main()
{
    int x; //specifies the number of values remaining to be entered
    int i; //iterations in loop
    int y; // number inputted
    int sum = 0; // sum of integers, initialized at 0

    cout << "**************************************************" << endl;
    cout << "\nSum of integers\n" << endl;
    cout << "**************************************************" << endl;

    cout << "\nHow many integers? ";
    cin >> x;

    for ( i= 1; i<= x; i++ ) //for loop x amount of times
    {
        cout << "\nEnter an integer: ";
        cin >> y;
        sum += y; //sum increases by number inputted
    }

    cout << "\nThe sum is: " << sum << endl;

}
