// to compute the factorial of any given number
# include <stdio.h>
void main()
{
  int i, n;
  long fact = 1;
printf("enter the number whose factorial is to be calculated\n");
  scanf("%d" , &n);
  for( int i=2; i<=n; i++)
  {
      fact= fact*i;
  }

printf(" the factorial of the given number is : %1d",fact);
  
  
}
