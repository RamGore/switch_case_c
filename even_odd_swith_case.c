#include<stdio.h>
int main()
{
 int num;
 printf("Enter any number:");
 scanf("%d",&num);
 switch (num%2==0)
 {
  case 1:
  printf("\n%d is even number",num);
  break;
  case 0:
  printf("\n%d is odd number",num);
  break;
}
}
