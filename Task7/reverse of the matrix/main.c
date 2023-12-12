#include <stdio.h>
#include <stdlib.h>



int index ;

int main()
{

    printf("enter the index of the array:  ");
    scanf(" %d " , &index);
    unsigned int num[index];





    for(int i =0 ; i < index ; i++){

        printf("enter the number %d: " , i);
        scanf(" %d " , &num[i]);



    }


   printf("reverse of the array is :  ");

    for(int i = (index -1) ; i >= 0 ; i--){


       printf(" %d ", num [i]);

   }

   printf("\n");
    return 0;
}

