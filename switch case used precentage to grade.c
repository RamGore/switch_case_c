#include<stdio.h>
void main()
{
    int num;
    printf("Enter the percentage:");
    scanf("%d",&num);
    switch(num/10)
    {
    case 10:
    case 9:
        printf("\n The grade is 'A'");
        break;
    case 8:
    case 7:
        printf("\n The grade is 'B'");
        break;
    case 6:
    case 5:
        printf("\n The grade is 'C'");
        break;
    default:
        printf("\n The grade is fail");
    }
}
