    /* Task_5.c */
    /* Method to replace all spaces in a string with '%20'*/
    /* Using C Programming Language */

#include <stdio.h>
    /* Header Declaration Standard Input and Output dot Header */
#include <string.h>
    /* Header Declaration String dot Header */

int main()
{
    char string[] = "Mr John Smith";
    /* Declaring char as string and Initialize it to Mr John Smith */
   int length = strlen(string);
   /* Declaring the length as strlen function which returns the length of the string pointed to by s */

    int i;
        /* Declaring i as integer Data Type */
    int count=0;
        /* Declaring count as integer Data Type and initialized equals to zero*/
    int k=0;
         /* Declaring k as integer Data Type and initialized equals to zero*/

           /* LOOP STATEMENT START HERE */
    for(i = 0; i < length; i++){
            /* Initializer: Initialize i equals to zero */
            /* Condition: i is less than length */
            /* Updater: i is incrementing by 1 */

         /* CONDITIONAL STATEMENT STARTS HERE */
    if(string[i]==' ') count++;
        /* If string is equals to space */
        /* Then increment count by 1 */

        /* OUTPUT STARTS HERE */
    char newstring[length + 2 * count];
        /* Declaring newstring as character Data Type */
        /* It assign string [length + 2 * count] */

        /* LOOP STATEMENT FOR OUTPUT STARTS HERE */
    for(i = 0; i < length; i++){
            /* Initializer: Initialize i equals to zero */
            /* Condition: i is less than length */
            /* Updater: i is incrementing by 1 */

        /* CONDITIONAL STATEMENT FOR OUTPUT STARTS HERE */
    if(string[i]==' ') {
            /* If string is equals to space */
            /* Then replace space with the following new string */
        newstring[k++] = '%';
        newstring[k++] = '2';
        newstring[k++] = '0';
    }
    else
        /* If the above condition is not met */
        /* Then, Let new string equals to the old strin */
        newstring[k++] = string[i];
}
    newstring[k] = '\0';
        /* New string [k] is equals to termination of character string */

    printf("%s\n", newstring);
        /* Print new string pointed by s as a function of strlen */

    return 0;
}
}

  /* END OF CODE HERE */
