#include<stdio.h>
int main()
{
    char chr;
    printf("Enter any first character in color name: ");
    scanf("%c",&chr);
    switch (chr)
    {
     case'b':
        printf("blue color is present: ");
        break;
     case'y':
        printf("yellow color is present");
        break;

     case'r':
        printf("red color is present");
        break;
     case'g':
        printf("green color is present");
        break;
     case's':
        printf("silver color is present");
        break;
     case'w':
        printf("white color is present");
        break;
     case'o':
        printf("orange color is present");
        break;
     default:
        printf("color is not present");
        break;
    }
}
