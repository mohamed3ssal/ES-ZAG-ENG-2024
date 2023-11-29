#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , result=1 ;

    printf(" please enter the number : \n ");

    scanf(" %d \n" , &num  );

    while(num != 1 ){

             result *= num;

            num--;
    }

    printf(" The factorial of this number is : %d "  , result);



    return 0;
}
