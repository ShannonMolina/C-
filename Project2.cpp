

#include <iostream>
using namespace std;

int main()
{
    int y;
    int x = 1;
    int total = 0;

    while ( x <= 10 )
    {
        y = x * x;
        cout << y << endl;
        total += y;
        x++;
    }

    cout << "Total is " << total << endl;
}

/*******************************************************
Output:

1
4
9
16
25
36
49
64
81
100
Total is 385
Press any key to continue . . .

********************************************************/
