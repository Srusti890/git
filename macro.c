#include<stdio.h>
#define bitcheck ((0x1919) & (1<<(12)))
void main()
{
   if(bitcheck== 0)
    printf("12th bit is clear");
    else
        printf("h");
}


