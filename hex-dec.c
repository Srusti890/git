#include<stdio.h>
void main()
{
  int dec_num=0, rem, num,sum=0,base=1,i;
  printf("enter number");
  scanf("%d",&num);
  while(num>0)
  {
    rem=num%10;
    dec_num=dec_num+rem*base;
    num=num/10;
    base=base*2;
  }
printf("%d",dec_num);
}
