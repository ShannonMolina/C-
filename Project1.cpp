#include <iostream> //allows program to output data on screen

using namespace std; //eliminates the need to repeat the std:: prefix

//function main begins program execution
int main()
{
   //variable declarations
   int x;
   int y;
   int z;

   cout << "Input three different integers: "; //prompt user for data
   cin >> x >> y >> z; //reads integers from user into x, y, and z

   cout << "Sum is " << (x+y+z) << endl; //print sum
   cout << "Average is " << (x+y+z)/3 <<endl; //print average
   cout << "Product is " << (x*y*z) <<endl; //print product
   cout << "Smallest is " <<(x<y ? (x<z ? x:z):(y<z ? y:z))<<endl; //print smallest integer using ternary operators
   cout << "Largest is " << (x>y ? (x>z ? x:y):(y>z ? y:z))<<endl; //print largest integer using ternary operators

}//end function main
