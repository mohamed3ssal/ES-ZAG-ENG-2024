#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int  num , residual1=0, residual2=0 ;
    printf("enter an number to check if it's prime or not \n ");
    scanf("%d", &num);




     if (num %num ==0 && num %1 ==0)
             residual1 = 0  ;

    for (int i =2 ; i <= num  ; i ++)
       {

     if (i!= num){

       if (num %num ==0 && num %1 ==0 && num % i ==0)

            residual1 = 1  ;
     }

      }



   if (residual1 == 0)
            printf("this number is prime");

   if (residual1 == 1)
            printf("this number not prime");


return 0;
}
