// Task_9
// A function that takes a string and determines if the string is a palindrome
// or not
#include <iostream>
// Importing Header File to Perform Input and Output Operation
#include <string.h>
// Importing Header File to Perform String Operation
using namespace std;
// Using the Standard C++ namespace
int main()
{
    char str_1[20];
    // Declaring str_1 as Character Data Type of 20 Elements
    char str_2[20];
    // Declaring str_2 as Character Data Type of 20 Elements
    int i;
    // Declaring i as Integer Data Type
    int j;
    // Declaring j as Integer Data Type
    int len = 0;
    // Declaring len as Integer Data Type
    // And assign zero to it
    int check = 0;
    // Declaring check as Integer Data Type
    // And assign zero to it

    std::cout << "Enter the string : ";
    // Prompt user to enter the string that
    // He want to check whether is palindrome or not
    gets(str_1);
    // Read the string entered by the user
    // And assign it to str_1

    len = strlen(str_1) - 1;
    // Length is assign to strlen(str_1)
    // Strlen is used to return the length of String
    // That is Str_1

    // FUNCTION STARTS HERE
    for (i = len, j = 0; i >= 0 ; i--, j++)
            // Initializer: Initialize i and assign it to len
            // Initializer: Initialize j and assign it to zero
            // Condition: i is greater than or equals to zero
            // Updater: i is decrementing by 1
            // Updater: j is incrementing by 1

        str_2[j] = str_1[i];
        // CONDITIONAL STATEMENT STARTS HERE
    if (strcmp(str_1, str_2))
        // strcmp is used to compare the characters of Strings str_1 and str_2
        // If that condition is met
        check = 1;
        // Then, check is assign to one
    if (check == 1)
        // If check is equals to one
        cout << str_1 << " No";
        // Then, print out str_1 as N
    else
        cout << str_1 << " Yes";
        // Otherwise, print out str_1 as Yes
    return 0;
}
// END OF CODES HERE
