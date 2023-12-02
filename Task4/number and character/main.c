#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ;
    char character ;
    printf("enter the number and character\n");
    scanf("%d %c ", &num , &character  );

    if ((num % 2) ==0)
        printf("%c \n" , character);


    else if (((num % 2) !=0) && (character >=65 && character <=90) )

            printf("%c " , (character + 32));

    else
            printf("%c " , (character - 32));

    return 0;
}
