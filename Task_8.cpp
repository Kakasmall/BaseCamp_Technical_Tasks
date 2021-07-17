// Task_8

// A method to count the number of 3s that appear in all the numbers between 0 and n
// (inclusive). It should return an object containing the count of the number of 3s
// that appear and an array of the numbers that have 3s in them

#include <iostream>
// Importing Header File to Perform Input and Output Operation

using namespace std;
// Using the Standard C++ namespace

// Declaring count_3s as a function
int count_3s(int n)

{
	int count = 0;
	// Declaring count as Integer Data Type
	// And initialize it to zero

	while (n > 0)
        // While n is greater than 0
	{
	    // CONDITION STATEMENT
		if (n % 10 == 3)
		// If 10 == 3 Modulo n
	{
		count++;
        // Then, increment count by 1
	}
	n = n / 10;
        // n is assign to n divided by 10
	}
	return count;
        // The, return count
}

int count_in_range(int n)
{
	int count = 0 ;
	// Declaring count as Integer Data Type
	// And initialize it to zero

	// LOOP STATEMENT STARTS HERE
	for (int i = 2; i <= n; i++){
            // Initializer: Initialize i and assign it to two
            // Condition: i is less than or equals to n
            // Updater: i is incrementing by 1
		count += count_3s(i);
            // Add the value of count_3s (i) to count
	}
	return count;
}

int main()
{
	int n;
	// Declaring n as Integer Data Type
	std::cout << "Enter the Number: ";
	// Prompt user to enter the number
	std::cin >> n;
	// Read the number entered by the user
	// And assigned it to variable n
	std::cout << "Total occurrences of 3 from 0 to " << n << " is " << count_in_range(n) << endl;
	std::cout << count_in_range (n);
	return 0;
}
// END OF CODES HERE
