// Task_1
// A function that takes an array of positive integers.
// The function should calculate the sum of all even
// and odd integers and return an array containing the sums.

#include <iostream>
// Importing Header File to Perform Input and Output Operation
#include <conio.h>
// Importing Header File to Flash Input and Output Operation
using namespace std;
// Using the Standard C++ namespace
int main()
{

    int SumOdd = 0;
    // Declaring SumOdd as Integer Data Type
    // And assign it to zero
    int SumEven = 0;
    // Declaring SumEven as Integer Data Type
    // And assign it to zero
    int i;
    // Declaring i as Integer Data Type
    int Quant;
    // Declaring Quant as Integer Data Type
    std::cout << "Enter the size of the array: ";
    // Prompt the user to enter the size of the array
    std::cin >> Quant;
    // Read the number entered by the user and assign it to Quant
    int arr[Quant];
    std::cout<<"Enter the Array elements: ";
    // Prompt the user to enter the element of the array

        // FUNCTIONS STARTS HERE
    for(i = 0; i < Quant; i++){
            // Initializer: Initialize i and assign it to zero
            // Condition: i is less than Quant
            // Updater: i is incrementing by 1
            std::cin >> arr[i];
            // Read the number entered by the user and assign it to arr element of updater i
    }
    for(i = 0; i < Quant; i++){
            // Initializer: Initialize i and assign it to zero
            // Condition: i is less than Quant
            // Updater: i is incrementing by 1

            // CCONDITIONAL STATEMENT STARTS HERE
        if(arr[i]% 2==0){
            // If arr element of i is Modulo of 2 == 0
        SumEven = SumEven + arr[i];
            // SumEven is assigned to SumEven plus arr element of i
        }
            // If that condition is not met
    else {
            // Then, execute the following statement
             SumOdd = SumOdd + arr[i];
            // SumOdd is assigned to SumOdd plus arr element of i
        }
    }
            // CONDTIONAL STATEMENT ENDS HERE
    std::cout<<"The Sum of Even Numbers are: "<<SumEven;
            // Print out the Sum of Even Numbers

    std::cout<<"\nThe Sum of Odd Numbers are: "<<SumOdd;
            // Print out the Sum of Odd Numbers

    getch();
    // Function to hold the output screen for some time
    return 0;
}
// CODES ENDS HERE
