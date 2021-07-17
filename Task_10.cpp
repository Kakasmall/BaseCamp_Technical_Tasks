// Task_10
// A function to calculate the character in the
// String with the most occurrences and return that character
// and the total occurrence of the character

#include <iostream>
// Importing Header File to Perform Input and Output Operation
#include <string>
// Importing Header File to Perform String Operation

using namespace std;
// Using the Standard C++ namespace

int main()
{
	string strg;
	// Declaring strg as String Data Type
	int i;
	// Declaring i as Integer Data Type
	int l;
	// Declaring l as Integer Data Type
  	int max = -1;
  	// Declaring max as Integer Data Type
  	// And assign -1 to max
  	char output;
  	// Declaring output as Character Data Type

  	int capacity [255] = {0};
  	// Declaring capacity as Integer Data Type
  	// And assign the value of capacity to 255

	std::cout << "\nPlease Enter the String to Find Maximum Occurrence Character is:  ";
	// Prompt user to enter the string he want to find the
	// Maximum Occurrence Character
	getline(std::cin, strg);
	// Using a standard library function that getline is used to
	// Read a string from an input stream

	l = strg.length();
	// l is assign to strg dot length

    // FUNCTION STARTS HERE
  	for(i = 0; i < l; i++)
            // Initializer: Initialize i and assign it to zero
            // Condition: i is less than l
            // Updater: i is incrementing by 1

  	{
  		capacity[strg[i]]++;
	}

  	for(i = 0; i < l; i++){
            // Initializer: Initialize i and assign it to zero
            // Condition: i is less than l
            // Updater: i is incrementing by 1

            // CONDITIONAL STATEMENT STARTS HERE
		if(max < capacity[strg[i]])
		// If max is less than capacity
		// Element of array i, strg
		{
			max = capacity[strg[i]];
        // Then, Maximum is assign to capacity

			output = strg[i];
			// The, output is assign to strg
		}
	}
	std::cout << "The Maximum Occurring Character in " << strg <<" is: " << output;

 	return 0;
}
// END OF CODES HERE
