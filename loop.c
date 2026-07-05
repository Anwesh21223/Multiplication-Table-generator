#include<stdio.h>
int main()
{
  // This program aims to get a input from the user and print the multiplication table of the input number till 10.
int a;
printf(" Input a number to get a multiplication table of that number \t");
scanf("%d",&a);
// Here we will begin our loop.
for(int i=1;i<11;i++)
   {
    printf(" %d * %d = %d",a,i,a*i);
    printf("\n");
   }
    return 0;
}
