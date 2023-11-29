#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  num , power;
    float result=1.;

    printf("enter the number :  ");

    scanf("%f \n ",&num);

    printf("enter the power : ");

    scanf("%f \n",&power);

for (int i=1; i<=power; i++){

    result*=num;

}
    //result=pow( num ,power);
    printf("%.2f", result);
    return 0;


}
