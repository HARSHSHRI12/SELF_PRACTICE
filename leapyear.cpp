/*#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
     if(((year%4==0) && ((year%400==0) || (year%100!==0))  
    {
        printf("%d the leap year",&year);
    }
else{
    printf("%d is not the leap year",&year);
}
return 0;
}*/
#include<stdio.h>  
#include<conio.h>  
void main() {  
    int year;  
    printf("Enter a year: ");  
    scanf("%d", &year);  
    if(((year%4==0) && ((year%400==0) || (year%100!==0))  
    {  
        printf("%d is a leap year", &year);  
    } else {  
        printf("%d is not a leap year", &year);  
    }  
    getch();  
}  


 