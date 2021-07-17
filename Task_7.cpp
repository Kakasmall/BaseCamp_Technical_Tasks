// Task_7
// A function that takes an array of positive integers and calculates the standard deviation of the numbers
#include <iostream>
    // Importing header file to perform input and output operation
#include <cmath>
    // Importing header file to perform mathematical operations
using namespace std;
// Using Standard C++ namespace

float Standard_Deviation(float *array, int count);
// Declaring Standard_Deviation as float Data Type

int main() {
    int count;
    // Declaring count as Integer Data Type
     int i;
     // Declaring i as Integer Data Type

    float ArrayInput[300];
    // Declaring the ArrayInput as float
    // And initialize the ArrayInput Size to 300, that is Element of an ArrayInput

    std::cout << "Enter the Number of Elements\n";
    // Prompt user to enter the size or element of an Array
    std::cin >> count;
    // Import count declared above as Integer Data Type

    std::cout << "Enter the " << count <<" Elements\n";
     // Prompt user to enter the number of the size or element of an Array

      /* LOOP STATEMENT STARTS HERE */
    for(i = 0; i < count; i++){
            // Initializer: Initialize i equals to zero
            // Condition: i is less than count
            // Updater: i is incrementing by 1
     std::cin >> ArrayInput[i];
      // Import ArrayInput declared above as Flaot
    }

    std::cout << "Standard Deviation is: " << Standard_Deviation(ArrayInput, count);
        // Display the Output of the Standard Deviation
    return 0;
}
    // FUNCTION TO FIND STANDARD DEVIATION
float Standard_Deviation(float *array, int count) {
    // Declaring Standard_Deviation as float Data Type as declared above
    float Sum = 0.0;
    // Declaring Sum as Float Data Type and Initialize it equals to zero point zero
    float Standard_Dev = 0.0;
    // Declaring Standard_Dev as Float Data Type and Initialize it equals to zero point zero
    float Mean;
    // Declaring Mean as Float Data Type
    int j;
    // Declaring j as Integer Data Type

     // LOOP STATEMENT FOR CALCULATING MEAN STARTS HERE
    for(j = 0; j < count; j++) {
            // Initializer: Initialize j equals to zero
            // Condition: j is less than count
            // Updater: j is incrementing by 1
        Sum += array[j];
        // Sum increment array equals to j

    }
    // CALCULATING THE MEAN STARTS HERE
    Mean = Sum / count;
        // Mean equals to Sum divided by count

    // LOOP STATEMENT FOR CALCULATING STANDARD DEVIATION STARTS HERE
    for(j = 0; j < count; ++j) {
            // Initializer: Initialize j equals to zero
            // Condition: j is less than count
            // Updater: 1 is incrementing by j
        Standard_Dev += pow(array[j] - Mean, 2);
    // Standard Deviation is equals to the power of array j minus mean
    }

    return sqrt(Standard_Dev/count);
    // Square root of Standard Deviation divides by count
}
//END OF CODES HERE
