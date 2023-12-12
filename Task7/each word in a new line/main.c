#include <stdio.h>
#include <stdlib.h>


char word[];

int main() {
    printf("enter your words \n" );


           gets(word);


    for(unsigned int i =0; i < 100 ; i++){


            if(word [i] != ' '){
               printf("%c" ,word [i] );
            }

            else{
                printf("\n");
            }



    }

    return 0;
}



