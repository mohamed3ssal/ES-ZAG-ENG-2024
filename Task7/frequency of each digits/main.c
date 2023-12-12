#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string[1000] ;


unsigned int frequency [10] = {0,0,0,0,0,0,0,0,0,0};

int main()
{
    printf("enter the string :\n");
    scanf("%s" , string);




    for(int i = 0 ;  i < strlen(string) ; i++ ){

        if (string[i] == '0')
            frequency [0]++;


        else if (string[i] == '1')
            frequency [1]++;


        else if (string[i] == '2')
            frequency [2]++;



       else if (string[i] == '3')
            frequency [3]++;


       else if (string[i] == '4')
            frequency [4]++;


        else if (string[i] == '5')
            frequency [5]++;



       else if (string[i] == '6')
            frequency [6]++;



       else if (string[i] == '7')
            frequency [7]++;



       else if (string[i] == '8')
            frequency [8]++;



       else if (string[i] == '9')
            frequency [9]++;


    }



    printf("frequency of  is :  " );

    for(int j = 0 ;  j < 10 ; j++){

        printf("%d" , frequency[j]  );

    }

    return 0;
}
