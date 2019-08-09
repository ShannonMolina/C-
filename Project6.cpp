/************************************************************************************************
*This program utilizes the concepts learned in Chapters 6-7, i.e., Arrays.
*
*This program prompts the user for the prices of 10 automobiles
*(use looping to do this and store the prices in an array).  The automobiles may be
*priced from less than $1 up to $99,999.  No negative numbers are allowed.
*Perform error checking to ensure that only valid numbers are entered ($1 - $99,999).
*Using a function, calculate and display the number of cars in all 10 price categories,
*i.e., $1 - $9999, $10,000 - $19,999, $20-000 - $29,999, … $90,000 - $99,999.
*Call a function that loops through the array, and displays the highest and lowest priced cars only.
*Call a separate function which calculates the average of all of the cars,
*and passes the average amount back to the main() function, where it is printed out.
************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void display(double prices[], int size);
double average(double prices[], int size);

int main()
{
    //declaring variables
    const int MaxCars = 10;
    double prices[MaxCars];
    double cost;

    //loop that prompts the user for the prices of 10 automobiles
    for (int i = 0; i < MaxCars; i++)
    {
        cout << "Please enter the price of Automobile #" << (i + 1) << ": ";
        cin >> cost;

        //error checking
        while (cost < 1 || cost > 99999)
        {
            cerr << "Prices must be ($1 - $99,999).  No negative numbers are allowed. Please try again." << endl;

         //return to loop
            cout << "Please enter the price of Automobile #" << (i + 1) << ": ";
            cin >> cost;
        }
       //store prices in array
       prices[i] = cost;
    }

    display(prices, MaxCars);
    double avg = average(prices, MaxCars);

    cout << "The average price of all the cars is: $" << setprecision(false) << fixed << avg
        << " (round to the nearest dollar)" << endl;
    cout << endl; //blank line

    return 0;
} // end main

//display function
void display(double prices[], int size)
{
    //declaring variables
    int counter;
    double highestPriced = prices[0];
    double lowestPriced = prices[0];
    double maxRange = 9999;
    double minRange = 1;

    cout << endl; //blank line

    for (int i = 0; i < size; i++)
    {
        //if current price is greater than highestPriced, it becomes highestPriced
        if (prices[i] > highestPriced)
            highestPriced = prices[i]; //new highest price

        //if current price is lower than lowestPriced, it becomes lowestPriced
        if (prices[i] < lowestPriced)
            lowestPriced = prices[i]; //new lowest price

        counter = 0; //counter starts at 0

        //nested for loop to print the number of cars in each range
        for (int j = 0; j < size; j++)
        {
            //if price is greater than or equal to minRange and price is less than or equal to maxRange, increment counter by 1
            if (prices[j] >= minRange && prices[j] <= maxRange)
                counter++;
        }

        //prints number of cars in each range
        cout << "The number of cars in the $" << minRange << " - $"
            << maxRange << " range is: " << counter << endl;
        maxRange = maxRange + 10000;
        minRange = maxRange - 9999;
    }

    //prints highest and lowest price
    cout << "The highest priced car is: $" << highestPriced << endl;
    cout << "The lowest priced car is: $" << lowestPriced << endl;
} // end display

// average function
double average(double prices[], int size)
{
    //declaring variables
    double total = 0;

    //calculate total
    for (int i = 0; i < size; i++)
        total = total + prices[i];

    //calculate average and return
    return total / size;
} // end average
