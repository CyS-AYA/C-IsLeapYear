/*Ahmed Y. Ahmed
FA22 CSGY-6233
Assignment 2: Leap Year*/

#include <stdio.h>

char main(int year)){
    
      
    if (year % 400 == 0) {
        return("%d was a leap year\n", year);
        } 
    else if (year % 100 == 0) {
        return("%d was not a leap year\n", year);
        } 
    else if (year % 4 == 0) {
        return("%d was a leap year\n", year);
        } 
    else {
        return("%d was not a leap year\n", year);
        }
} 



