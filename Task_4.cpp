// Task_4
// Password Validator
#include <iostream>
using namespace std;
// Using the Standard C++ namespace
int main()
{
  int LowAlp=0;
     // Declaring and initializing the variable LowAlp equals to zero
  int UppAlp=0;
    // Declaring and initializing the variable UppAlp equals to zero
  int Num=0;
     // Declaring and initializing the variable Num equals to zero
  int SpeChar=0;
     // Declaring and initializing the variable SpeChar equals to zero

  string password;
  // Declaring the Password variable as String

  std::cout << "Please, Enter the Password" <<endl;
  // Output statement that prompt user to Enter the Password

  std::cin >> password;
  // Reading the password entered by a user
  // And assigned it to password as string

  int l = password.length(),i;
  // Initializing the length of password in Integer Types as l

  // FUNCTION STARTS HERE
  for(i = 0; i < l; i++)
    // For loop, the  entry loop as i equals  to zero i=0
    // Condition as i is less than l, i<l
    // Loop updater as i is incrementing by 1
  {
    // CONDITIONAL STATEMENT STARTS HERE
    if(islower(password[i]))
      LowAlp=1;
      // If the password entered by the user is in Lower Case, then its LowAlp which equals to one LowAlp=1

    if(isupper(password[i]))
      UppAlp=1;
      // If the password entered by the user is in Upper Case, then its UppAlp which equals to one UppAlp=1

    if(isdigit(password[i]))
      Num=1;
      // If the password entered by the user is in Number Type, then its Num which equals to one Num=1

    if(!isalpha(password[i]) && !isdigit(password[i]))
      SpeChar=1;
      // If the password entered by the user is in Special Character, then its SpeChar which equals to one SpeChar=1
  }

  if(LowAlp && UppAlp && Num && SpeChar && l>=8)
    cout<<"The Password is Very Strong"<<endl;
    // This statement satisfied that if the password meet the above five criteria or condition, then the password is Very Strong

  else if(LowAlp && UppAlp && Num && l>=8)
    cout<<"The Password is Strong"<<endl;
    // This statement satisfied that if the password meet the above four criteria or condition, then the password is Strong

  else if(Num && l>=8)
    cout<<"The Password is Weak"<<endl;
    // This statement satisfied that if the password meet the above two criteria or condition, then the password is Weak

  else
    cout<<"The Password is Very Weak"<<endl;
    // If the password it does not meet the above three statements, then the password is Very Weak


  return 0;
}
// END OF THE CODES HERE
