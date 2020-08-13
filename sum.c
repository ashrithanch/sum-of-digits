#include<stdio.h>
#include<conio.h>
void main()
{
int numarray[10];
int i,sum=0;
int*ptr;
printf("\nenter 10 elements:");
for(i=0;i<10;i++)
scanf("%d",&numarray[i]);
ptr=numarray;
for(i=0;i<10;i++)
{
sum=sum+*ptr;
ptr++;
}
printf("the sum of array elements:%d",sum);
}
