#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num , counter = 0 ;

    printf("enter an unsigned number:\n ");
    scanf("%d", &num);

    for (int i = 31 ; i >= 0  ; i--){

       unsigned int  bin = num >> i ;
       int anding = bin & 1 ;
       if (anding ==1)
            counter ++;

    }

    printf("Number of 1's in this number is : %d\n", counter);

    return 0;
}
