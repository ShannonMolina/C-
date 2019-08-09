#include <iostream>
using namespace std;

int main()
{
    int counter = 1;

    while ( counter != 0 )
    {
        if ( counter == 11 )
            break;

        cout << counter << " ";
        counter++;
    }

    cout <<endl;
}
