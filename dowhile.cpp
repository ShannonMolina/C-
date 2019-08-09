#include <iostream>
using namespace std;

int main()
{
   double grade = 76;
   int counter = 1; //have to add this initialization/declaration

   do
   {
       grade *= 1.06;
       cout << "After " << counter << " session(s), the student's grade will be " << grade << endl;
       counter++;
   }
    while( grade <=90 );

}
