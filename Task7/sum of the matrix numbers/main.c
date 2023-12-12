#include <stdio.h>
#include <stdlib.h>


int index ;
unsigned int num [50];

unsigned int sum = 0 ;


int main()
{
    printf("enter the index of the array \n ");
    scanf(" %d " , &index);

    for(int i =0 ; i < index ; i ++){

        printf("enter number %d : " , i );
        scanf(" %d " , &num[i]);

        sum += num[i] ;

    }


    printf(" sum of %d of the array is : %d " , index , sum );
    return 0;
}
