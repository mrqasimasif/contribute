#include <stdio.h>
 
int main(void) {
    int i;
    for (i=1; i<=15; i++) {

        if ((i%3) && (i%5) == 0)
            printf ("Fizz Buzz\t");
         
        else if ((i%3) == 0)   
            printf("Fizz\t");

        else if ((i%5) == 0)
            printf("Buzz\t");
     
        else
            printf("%d\t", i);
    }
 
    return 0;
}