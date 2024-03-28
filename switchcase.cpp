#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number :");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("it is monday");
        break;
         case 2:
        printf("it is tuesday");
        break;
         case 3:
        printf("it is wednesday");
        break;
         case 4:
        printf("it is thusday");
        break;
         case 5:
        printf("it is friday");
        break;
         case 6:
        printf("it is satarday");
        break;
         case 7:
        printf("SUNDAYYY!!!");
        break;
        default:
            printf("Sorry you have entered invalid input!!");
        }
    
return 0;
}