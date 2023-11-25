#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C;
    printf("please enter value of A ,B ,C \n ");
    scanf("%f %f %f",&A, &B, &C);

    if(A>B && A>C && B>C )
    {
        printf("max number is:%f \n min number is:%f   " ,A ,C);
    }

    else if(A>B && A>C && C>B )
    {
        printf("max number is:%f \n min number is:%f   " ,A ,B);
    }

    else if(B>A && B>C && A>C )
    {
        printf("max number is:%f \n min number is:%f   " ,B ,C);
    }

    else if(B>A && B>C && C>A )
    {
        printf("max number is:%f \n min number is:%f   " ,B ,A);
    }

    else if(C>B && C>A && A>B )
    {
        printf("max number is:%f \n min number is:%f   " ,C ,B);
    }

    else if(C>B && C>A && B>A )
    {
        printf("max number is:%f \n min number is:%f   " ,C ,A);
    }

    else

        printf("All numbers are the same: %f",A);

    return 0;
}
