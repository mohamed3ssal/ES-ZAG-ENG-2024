#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , d ;

    printf("enter values of A B C D ");

    scanf(" %d %d %d %d " , &a , &b , &c , &d );

    long int multi = a * b * c * d ;


    int last_2_digit = multi % 100 ;

    printf(" The last 2 digits is : %d \n" , last_2_digit );

    return 0;
}
