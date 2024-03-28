//this code is not get the currect output do not call the function in condition.
//------------------------------------------------------------------------------.
//nested defrent type formula calling
#include<stdio.h>
//pre define value of pi
#include <string.h>
#define pi 3.14159 

//function decleration 
void adding();
void multiplication();
void areaC();
void areaE();
void si();

//main function started
int main()
{
    char call[20];
    for(int i=0;i<=5;i++)
    {
   printf("------------------------------------------------------------------------\n\n\n");
    printf("Enter what to do? :");
    scanf("%s",&call);
    printf("------------------------------------------------------------------------");
    //condition started
   // printf("the result of compare function strcmp is %d", strcmp(call,"add") );
    if(strcmp(call,"add")==0)
    {    
         adding();
    }
    else if(strcmp(call,"multiplication")==0)
    {
        multiplication();
    }
    else if(strcmp(call,"Acircul")==0)
    {
         areaC();
    }
    else if(strcmp(call,"Aellepse")==0)
    {
         areaE();
    }
    else if(strcmp(call,"sintrest")==0)
    {
         si();
    }
    //false statement..
    else{
        printf("This oprator is not included!!\n this this not working .........");
    }
//function call
void adding();
void multiplication();
void areaC();
void areaE();
void si();
    }
return 0;
}
//Defination of adding function
void adding()
{
    int a,b,c;
   printf("------------------------------------------------------------------------\n\n");
    printf("Enter a number : ");
    scanf("%d",&a);
   printf("------------------------------------------------------------------------\n\n");
    printf("Enter a second number : ");
    scanf("%d",&b);
    printf("------------------------------------------------------------------------\n\n");
    c=a+b;
    printf("The Sum of a And b is : %d\n\n\n",c);
printf("------------------------------------------------------------------------\n\n");
}
//Defination of Multiplication function
void multiplication()
{
 int a,b,c;
 printf("------------------------------------------------------------------------\n\n");
 printf("Enter a number : ");
    scanf("%d",&a);
   printf("------------------------------------------------------------------------\n\n");
    printf("Enter a second number : ");
    scanf("%d",&b);
   printf("------------------------------------------------------------------------\n\n");
    c=a*b;
    printf("The Multiplication of a And b is : %d\n\n\n",c);
printf("------------------------------------------------------------------------\n\n");
}
//Defination of Area of circul function
void areaC()
{
float area,radius;
printf("------------------------------------------------------------------------\n\n");
printf("Enter the Radius of the circul : ");
scanf("%f",&radius);
printf("------------------------------------------------------------------------\n\n");
area=pi*radius*radius;
printf("The Area of the Circul is : %f\n\n\n",area);
printf("------------------------------------------------------------------------\n\n");
}
   //Defination of Area of Ellepse function 
void areaE()
{
    float area,a,b;
    printf("------------------------------------------------------------------------\n\n");
    printf("Enter a axis : ");
    scanf("%f",&a);
   printf("------------------------------------------------------------------------\n\n");
    printf("Enter b axis : ");
    scanf("%f",&b);
   printf("------------------------------------------------------------------------\n\n");
   area=pi*a*b;
    printf("------------------------------------------------------------------------\n\n");
    printf("The Area of Ellepse is : %f\n\n\n",area);
printf("------------------------------------------------------------------------\n\n");
}
//Defination of Simle Intrest function 
void si()
{
    float si,principle,intrest,time;
    printf("------------------------------------------------------------------------\n\n");
    printf("Enter Principle Value :");
    scanf("%f",&principle);
    printf("------------------------------------------------------------------------\n\n");
    printf("Enter Intrest Value :");
    scanf("%f",&intrest);
    printf("------------------------------------------------------------------------\n\n");
    printf("Enter time duaration :");
    scanf("%f",&time);
    si=principle*intrest*time/100;
    printf("------------------------------------------------------------------------\n\n");
    printf("The Simple Intrest is : %f\n\n\n",si);
printf("------------------------------------------------------------------------\n\n");
}
