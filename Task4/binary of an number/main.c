#include <stdio.h>
#include <stdlib.h>

int main()
{   int num ;
    printf("enter the number \n");
    scanf(" %d" , &num);

    for (int i =15 ; i >=0 ; i--){

            int shifter = num >> i ;

            if (shifter > 0){




            printf("%d" , (shifter & 1) );

            }





    }
    return 0;
}
