#include<stdio.h>
 int main()
 {
     int i;
     printf("Enter the per of : ");
     scanf("%d",&i);
     switch(i)
     {
     case 80 ...100:
        {
            printf("A grad");
            break;
        }
     case 60 ...79:
        {
            printf("B grad");
            break;
        }
     case 40 ...59:
        {
            printf("c grad");
            break;
        }
     default:
             {
            printf("fail");
             }
     }
 }
