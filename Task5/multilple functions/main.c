#include <stdio.h>


unsigned int set(unsigned int num, int bit_num);
unsigned int clear(unsigned int num, int bit_num);
unsigned int toggle(unsigned int num, int bit_num);
unsigned int read(unsigned int num, int bit_num);

int main() {
    unsigned int num;
    int bit_num, id;

    printf("enter an number : ");
    scanf("%d", &num);

    printf("enter bit number : ");
    scanf("%d", &bit_num);

    printf("enter function id [ 1>>set, 2>>clear, 3>>toggle, 4>>read ]: ");
    scanf("%d", &id);

    switch (id) {
        case 1:
            set(num, bit_num);

            break;
        case 2:
            clear(num, bit_num);

            break;
        case 3:
            toggle(num, bit_num);

            break;
        case 4:
            read( num,  bit_num);
            break;
        default:
            printf("invalid function id entered.\n");
    }

    return 0;
}

unsigned int set(unsigned int num, int bit_num)
{
    num =  num |( 1 << bit_num) ;
    printf("number after setting bit %d: %d\n", bit_num, num);
}


unsigned int clear(unsigned int num, int bit_num)
{
    num = num & (~(1 << bit_num));
    printf("number after clearing bit %d: %d\n", bit_num, num);

}


unsigned int toggle(unsigned int num, int bit_num)
{
    num = num ^ (1 << bit_num);
    printf("number after toggling bit %d: %d\n", bit_num, num);
}

unsigned int read(unsigned int num, int bit_num)
{
    num = (num >> bit_num) & 1;
    printf("value of bit %d: %d\n", bit_num, read(num, bit_num));
}
