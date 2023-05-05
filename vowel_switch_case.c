#include<stdio.h>
int main()
{
  char ch;
  printf("Enter any character:");
  scanf("%c",&ch);
  switch (ch)
  {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   printf("The entered character is vowel character");
   break;
   default:
   printf("The entered character is not a vowel character");
  }
}
