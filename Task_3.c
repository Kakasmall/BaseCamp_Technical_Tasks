    /* Task_3.c */
    /* A function that accepts an array of positive integers */
    /* and returns an array of all prime numbers from the given array */
    /* Using C Programming Language */
#include<stdio.h>
    /* Importing header file to perform input and output operation */
int main()
{
    /**/
     int a[10];
     /*Declaring a as an Array of Integer Data Type*/
     /*And initialize the Array size to 10 */
     int n;
     /* Declaring n as Integer Data Type */
     int i;
     /* Declaring i as Integer Data Type */
     int j;
     /* Declaring j as Integer Data Type */
     int c = 0;
     /* Declaring c as Integer Data Type */
     /* And initialize it to zero */

     int prime[10];
     /*Declaring prime as an Array of Integer Data Type*/
     /*  And initialize the Array size to 10 */

     int t = 0;
     /* Declaring t as Integer Data Type */
     /* And initialize it to zero */

     printf("How Many Numbers You Want to Add in Array*\n");
     /* Prompt user to enter the limit of an Array */
     printf("Enter Limit: ");
     /* Prompt user to enter the limit of an Array */
     scanf("%d",&n);
     /* Read the limit of an array entered by a user */
     /* And store the value to variable n of Integer Data Type*/

     printf("\nEnter %d Numbers in Array:\n\n",n);
      /* Prompt user to enter the numbers as entered in the limit of an Array */

      /* LOOP STATAMENT STARTS HERE */
     for(i = 0; i < n; i++)
            /* Initializer: Initialize i equals to zero */
            /* Condition: i is less than n */
            /* Updater: i is incrementing by 1 */
          scanf("%d",&a[i]);
        /* Read the numbers entered by a user */
        /* And a is assign to an array i a[i] */

     for(i = 0;i < n; i++)
            /* Initializer: Initialize i equals to zero */
            /* Condition: i is less than n */
            /* Updater: i is incrementing by 1 */
     {
          c = 0;

          for(j = 2; j < a[i]; j++)
            /* Initializer: Initialize j equals to two */
            /* Condition: j is less than a array index of i */
            /* Updater: j is incrementing by 1 */
          {
              /* CONDITIONAL STATEMENT STARTS HERE */
               if(a[i]%j==0)
               /* If an array of a index of i, modifies j ==0 */
               {
                    c = 1;
          /* Then c is equals to 1 */
                    break;
               }
          }
          if(c == 0)
            /* If c==0 */
            /* Then do the execute the following statement */
          {
               prime[t]=a[i];
               t++;
               /* increment t by 1 */
          }
     }
     printf("Prime Numbers in Above Given Array is:\n");
      /* Print the prime number in the given array */

      /* LOOP STATAMENT FOR THE OUTPUT STARTS HERE */
     for(i = 0; i < t; i++){
            /* Initializer: Initialize I equals to zero */
            /* Condition: i is less than t */
            /* Updater: i is incrementing by 1 */

          printf(" %d ", prime[i]);
          /* Display the prime number in the above given array */
     }
     return 0;
}
/* CODES ENDS HERE */
