// Exercise 4.15
// Using a switch statement to count A, B, C, D and F grades.
//Calculating Class GPA
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int grade; // letter grade entered by user

   //changed the letter counts from int to double
   //so that gpa could be calculated with
   //two decimal points
   double aCount = 0; // count of A grades
   double bCount = 0; // count of B grades
   double cCount = 0; // count of C grades
   double dCount = 0; // count of D grades
   double fCount = 0; // count of F grades

  //added double gpa
  double gpa = 0;

   cout << "Enter the letter grades." << endl
      << "Enter the EOF character to end input." << endl;

   // loop until user types end-of-file key sequence (Ctl+Z)
   while ( ( grade = cin.get() ) != EOF )
   {
      // determine which grade was entered
      switch ( grade ) // switch statement nested in while
      {
         case 'A': // grade was uppercase A
         case 'a': // or lowercase a
            aCount++; // increment aCount
            break; // necessary to exit switch

         case 'B': // grade was uppercase B
         case 'b': // or lowercase b
            bCount++; // increment bCount
            break; // exit switch

         case 'C': // grade was uppercase C
         case 'c': // or lowercase c
            cCount++; // increment cCount
            break; // exit switch

         case 'D': // grade was uppercase D
         case 'd': // or lowercase d
            dCount++; // increment dCount
            break; // exit switch

         case 'F': // grade was uppercase F
         case 'f': // or lowercase f
            fCount++; // increment fCount
            break; // exit switch

         case '\n': // ignore newlines,
         case '\t': // tabs,
         case ' ': // and spaces in input
            break; // exit switch

         default: // catch all other characters
            cout << "Incorrect letter grade entered."
               << " Enter a new grade." << endl;
            break; // optional; will exit switch anyway
      } // end switch
   } // end while


   // output summary of results
   cout << "\n\nNumber of students who received each letter grade:"
      << "\nA: " << aCount // display number of A grades
      << "\nB: " << bCount // display number of B grades
      << "\nC: " << cCount // display number of C grades
      << "\nD: " << dCount // display number of D grades
      << "\n
      F: " << fCount // display number of F grades
      << endl;


   cout << setprecision(2) << fixed; //two decimal points
   //calculate class gpa
   gpa = (aCount*4 + bCount*3 + cCount*2 + dCount)/(aCount + bCount + cCount + dCount + fCount);
   cout << "Class GPA: " << gpa << endl; //print class pa

} // end function main

