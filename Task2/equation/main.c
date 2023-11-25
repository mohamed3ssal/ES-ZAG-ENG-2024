#include <stdio.h>
#include <stdlib.h>

int main()
{
   float A,B,C,D,X;
   printf("please enter value of A ,B ,C ,D \n ");
   scanf("%f %f %f %f",&A, &B, &C ,&D);

   X=(A*B)-(C*D);
   printf(" the result= %f " , X);
    return 0;
}
