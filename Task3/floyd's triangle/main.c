#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows;
    int columns , incr=1;

    printf("enter the number of rows of flotd's triangle to print :\n");

    scanf("%d \n " , &rows);

    columns = 1;

    for(int i = 1 ; i<= rows ; i++){


            for(int j = 1 ; j<= columns ; j++){


                printf(" %d \t " ,incr);
                incr++;

            }

      printf(" \n ");

      columns++;


    }
    return 0;
}


