#include <stdio.h>
#include <stdlib.h>

int main() {

    int max , min , num, No ;


    printf("enter the No of numbers : ");

    scanf("%d", &No);


    printf("enter number 1: ");
    scanf("%d", &num);
    max = num;
    min = num;

    for (int i = 2; i <= No; i++) {
        printf("enter number %d : " , i);
        scanf("%d", &num);


        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    printf("the max number is: %d\n", max);
    printf("the min number is: %d\n", min);

    return 0;
}
