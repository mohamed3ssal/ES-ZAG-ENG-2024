#include <stdio.h>
#include <stdlib.h>
#define pi 3.142857143
int main()
{
  float R , area;
  printf("please enter the radius: ");
  scanf("%f", &R);
  area = pi * R*R;
  printf(" \n Area= %.4f",area);
    return 0;
}
