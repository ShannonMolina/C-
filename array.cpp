#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n[10];

    for ( int i = 0; i < 10; i++ )
       n[i] = i + 1;

    for ( int i = 0; i < 10; i++ )
       cout << n[i];


    return 0;
}
