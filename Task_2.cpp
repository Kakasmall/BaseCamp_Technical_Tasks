// Task_2
// A function that accepts a positive integer and determines if it is a prime number
#include <iostream>
    // Header declaration to perform Input and Output Operation
using namespace std;
    // Using the C++ Standard Namespace
bool Prime_Num(int num);
    // Bool Function Declaration

int main(){
   int num;
   // Declaring the Number as Integer Data Type
   bool prime;
   // Declaring the variable prime that print if the condition gives Prime number or not.
   std::cout << "Enter the number:\n ";
   // Allowing the user to enter the number he want to test if its Prime Number or Not.
   std::cin >> num;
   // It reads the number entered by a user as Input.
   prime = Prime_Num(num);

  // CONDITIONAL STATEMENT STARTS HERE
   if (prime==true)
    // It test the condition if prime is equal to true.
      std::cout << num  << "True";
    // If  the above condition is true Print True.
   else
      std::cout << num << "False";
      // If the above condition is false, then Print False.
   return 0;
}
bool Prime_Num(int num){
    // Declaring   the function
    bool prime = true;
  
  // LOOP STATEMENT STARTS HHERE
    for(int f = 2; f <= num / 2; f++) {
            // This  loop contains Loop Entry as f in Integer Data Type which is equals  to 2.
            // It  also contain Loop Condition, f is less than or equals to num as declared above divided by 2.
            // The Loop also contains updater where the integer f is incrementing by 1, that is f++.
       if(num % f == 0) {
           // If this condition is equals to;
          prime = false;
            // Then, Prime is false.
          break;
       }
    }
    return prime;
}
// END OF CODES HERE
