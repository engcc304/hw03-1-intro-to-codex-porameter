//TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>   
#include <conio.h>   

int main() {         
    int a = 10 ;     // Declare and initialize an integer variable 'a' with a value of 10
    int b = 20 ;     // Declare and initialize an integer variable 'b' with a value of 20
    int d = 40 ;     // Declare and initialize an integer variable 'd' with a value of 40

    printf("This is %d + %d = %d ", a, b, a + b) ;   // Print a formatted string with values of 'a', 'b', and the sum of 'a' and 'b'

    for (int i = 0; i < d - 30; i++) {   // Start a loop where 'i' is initialized to 0, and the loop continues as long as 'i' is less than (d - 30)
        if (i < 30) {   // If 'i' is less than 30
            printf( "Here") ;   // output "Here" on display
        } else if (i == 8) {   // Else, if 'i' is equal to 8
            printf( "This is 8.") ;   //  output the string "This is 8."
        } else {   // For other cases
            printf( "ok") ;   // output the string "ok"
        }
    }  // End of the for loop

    return 0 ;   // Return 0 to indicate successful program execution
}  // End of the main function
