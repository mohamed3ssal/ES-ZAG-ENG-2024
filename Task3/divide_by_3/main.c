#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[5] ;


    for( int i=1; i<=5; i++){
        printf("please enter num%d:" ,i);
        scanf("%d ",&num[i]);
    }

    for (int i =1; i <= 5; i++) {
        if (num[i] % 3 == 0) {
            printf("%d \n ", num[i]);
        }
    }

    return 0;
}
