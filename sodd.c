#include<stdio.h>
void main()
{
int i,sum=0,s=0;
for(i=1;i<=15;i++)
{
sum =sum+i;    
}
printf("the sum of 1-15 is:%d\n",sum);
for(i=15;i<=45;i++)
{
if(i%2!=0)
{
 s=s+i;   
}
}
printf("the sum of odd numbers from 15-45 is:%d\n",s);
}
