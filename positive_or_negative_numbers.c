#include<stdio.h>
int main()
{
  int num;
  printf("Enter any numbers: ");
  scanf("%d",&num);
  switch (num>0)
  {
   case 1:
   printf("\n%d is positive number",num);
   break;
   case 0:
   switch (num<0)
   {
    case 1:
        printf("\n%d is negative number",num);
        break;
    case 0:
         printf("\n%d is zero number",num);
         break;
  }
  break;
}
}
