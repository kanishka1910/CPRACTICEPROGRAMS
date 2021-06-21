#include <stdio.h>
void main()
{
 int n;
 prinf("enter a number\n");
 scanf("%d" , &n);
 int sum=0, temp=n;
 while(temp!=0)
 {
     int r= temp%10;
     sum=sum+r*r*r;
     temp= temp/10;
 }
if( sum==n)
prinf("armstrong number");
else
printf("not a armstrong number");
}

