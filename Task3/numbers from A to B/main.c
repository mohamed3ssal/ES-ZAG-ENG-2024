#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("enter number A:");
    scanf("%d",&num1);
    printf("enter number B:");
    scanf("%d",&num2);
    printf("the numbers from A to B is: \n");
    for(int i= num1; i <= num2; i++)
        printf("%d \n", i);
    return 0;
}
