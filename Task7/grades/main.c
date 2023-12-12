#include <stdio.h>
#include <stdlib.h>


unsigned int succ_degree = 5 ;
unsigned int grades [3] [10] = { { 3,5 ,6 ,7 ,8 ,4 ,10 ,6 ,9,1 } , { 5,8 ,3 ,9 , 7,4 ,9 ,10 ,10 , 4} , { 1,5 ,7 , 6, 4,8 ,4 , 8,9 ,6 } } ;

unsigned int passed = 0 ;
unsigned int failed = 0 ;
float sum = 0 ;
float num_of_stud = 0 ;

int main()
{
unsigned int highest_grade = grades[0] [0] ;
unsigned int lowest_grade = grades[0] [0] ;



    for (int x=0 ; x <3 ; x++){

        for(int y=0 ; y <10 ; y++){

                sum += grades[x][y] ;
                num_of_stud ++ ;


           if (grades[x][y] > highest_grade  ){

            highest_grade = grades[x][y] ;


           }


           if (grades[x][y] < lowest_grade  ){

            lowest_grade = grades[x][y] ;


           }


            if (grades[x][y] < succ_degree )
                failed++;

            else
                passed++;




        }



    }




    printf("Number of passed students is : %d \n" , passed );
    printf("Number of failed students is : %d \n" , failed);

    printf("Highest grade is : %d \n" , highest_grade );
    printf("Lowest grade is : %d \n" , lowest_grade);

    printf("Average grade is : %.2f \n" , (sum / num_of_stud) );

    return 0;
}
