
/*Ahmed Y. Ahmed
FA22 CSGY-6233
Assignment 2: Leap Year*/

#include <stdio.h>

int main(int argc, char** argv){
    int year;
    year = atoi(argv[1]);

    if (year % 400 == 0) {
        printf("%d was a leap year\n", year);
        }
    else if (year % 100 == 0) {
        printf("%d was not a leap year\n", year);
        }
    else if (year % 4 == 0) {
        printf("%d was a leap year\n", year);
        }
    else {
        printf("%d was not a leap year\n", year);
        }
    return 0;
}
