#include <stdio.h>

//! Write a short program that prints each number from 1 to 20 on a new line. 
//! For each multiple of 3, print "Fizz" instead of the number. 
//! For each multiple of 5, print "Buzz" instead of the number. 
//! For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number. 

int main(void) {
    int i;
    //* FOR LOOP
    //* Set counter to 1
    //* Break when counter reaches 20 
    //* Increment counter by 1
    for (i = 1; i <= 20; i++) {
        //? IF number MOD 15 == 0
            //? PRINT "FizzBuzz"
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        }
         //? ELSE IF number MOD 3 == 0
            //? PRINT "Fizz"
        else if ( i % 3 == 0) {
            printf("Fizz\n");
        }
         //? ELSE IF number MOD 5 == 0
            //? PRINT "Buzz"
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
         //? ELSE
            //? PRINT number
        //? END IF
        else {
            printf("%i\n", i);
        }
   //* END FOR
    }
    return 0;
}
