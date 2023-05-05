#include<stdio.h>
void main()
{
    int num1,num2,r;
    char ch,ch2,con,ch1;
    do
    {
        printf("\n1.Addition('+')\n2.multiplication('*')\n3.subtraction('-')");
        printf("\nEnter your choice:");
        ch2=getch(ch);

        switch (ch2)
        {
        case '+':
            printf("\nEnter any two value:");
            scanf("%d %d",&num1,&num2);
            r=num1+num2;
            printf("\nAddition of %d+%d=%d",num1,num2,r);
            break;
        case '*':
            printf("\nEnter any two  value:");
            scanf("%d %d",&num1,&num2);
            r=num1*num2;
            printf("\nMultiplication of %d*%d=%d",num1,num2,r);
            break;
        case '-':
            printf("\nEnter any two value:");
            scanf("%d %d",&num1,&num2);
            r=num1-num2;
            printf("\nSubtraction of %d-%d=%d",num1,num2,r);
            break;
        default:
            printf("\n Sorry you have enter wrong choice");

        }
    printf("\n Do you want to continue(press y/n)?:");
    ch1=getche(con);
    }
    while(ch1=='y'||ch1=='Y');

}
