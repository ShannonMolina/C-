//Programming Project Assignment 4
//Determines if student is eligible for admission
#include <iostream>
using namespace std;

int main()
{
    //initialize variables
    double gpa;
    int score;

    while( true ) //while loop
    {
        cout << "Please enter your GPA: " ;
        cin >> gpa;


        if (gpa == 0.0)
        {
            cout << "\n\nThank you for your use of the Admissions Software Program at ABC Medical University." << endl;
            break; //if gpa entered is 0.0 then stop the loop
        }

        cout << "Please enter your entrance score: ";
        cin >> score;

        if (score == 40 || (gpa >= 3.7 && score >= 32)) //either score=40 OR (gpa is 3.7 or higher AND score is 32 or higher)
            cout << "Congratulations!  You are hereby admitted to ABC Medical University." << endl;

        else // if both sides of || are false then denied admission
            cout << "We are sorry!  You are hereby denied admission to ABC Medical University." << endl;
    }//end while

}//end function main
