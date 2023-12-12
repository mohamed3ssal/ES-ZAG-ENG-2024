#include <stdio.h>
#include <stdlib.h>
unsigned int num [10];

unsigned int max_min_num(unsigned int num[]);

int main()
{
    for (int i = 0 ; i < 10 ; i ++){

        printf("enter num %d: " , i);
        scanf(" %d" , &num[i]);



    }

    max_min_num( num);



    return 0;
}



unsigned int max_min_num(unsigned int num[10]){


unsigned int max = num[0];
unsigned int min = num[0];

     for (int i = 1 ; i < 10 ; i ++){

        if (num[i] > max ){
            max = num[i];
        }

        else if (num[i] < min){

            min = num[i];
        }





    }


    printf("the max num is:%d \n", max);
    printf("the min num is:%d \n", min);



  return max, min;
}
