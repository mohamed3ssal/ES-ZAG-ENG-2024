#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , residual, reverse=0 ;

    printf("enter the number:\n");

    scanf("%d", &num);

    while( num != 0 ){


            residual = num % 10 ;

            reverse = reverse * 10 + residual ;

            num = num / 10 ;


    }

    printf("reverse of the number is :  %d" , reverse);
    return 0;
}
