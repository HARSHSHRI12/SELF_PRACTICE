#include <stdio.h>
#include<string.h>
//function declaration
void india();
void amarica();
void southk();
//main function
int main()
{
    char type[20];
    for(int i=0;i<=3;i++){
    printf("Enter where are you from??:\n");
    scanf("%s", &type);
    if (strcmp(type,"india")==0)
    {
       //call india function as a condition
        india();
    }
    else if (strcmp(type,"amarica")==0)
    {
         //call amarica function as a condition
        amarica();
    }
    else if (strcmp(type,"south koria")==0)
    {
        //call southk function as a condition
        southk();
    }
    else
    {
        printf("This data is not avalibale for the country please wait after some mounth");
    }
 //call all function in main function
 void india();
void amarica();
void southk();
    }
 return 0;
 }

//indian function code started(defination)
void india()
{
    int a;
    printf("Hello!!\nNmashte you are from Indian Your prime minister is \nNARENDRA MODI\n");
    printf("ENTER A NUMBER:");
    scanf("%d", &a);
    if (a == 91)
    {
        printf("This is the indian number\n");
    }
    else
    {
        printf("I DONT KNOW THIS NUMBER IS WHICH PLACE!!\n");
    }
}
//amarica function started (defination)
void amarica()
{
    int a;
    printf("Hello!!\nGood morning you are from Amarica Your prasedent is \n DONAL TRAM\n");
    printf("ENTER A NUMBER:");
    scanf("%d", &a);
    if (a == 51)
    {
        printf("This is the Amarican number\n");
    }
    else
    {
        printf("I DONT KNOW THIS NUMBER IS WHICH PLACE!!\n");
    }
}
//south coria function started (defination)
void southk()
{
    int a;
    printf("Hello!!\nSouth Koria you are from Indian Your prime minister is \nKINGJONN\n");
    printf("ENTER A NUMBER:");
    scanf("%d", &a);
    if (a == 15)
    {
        printf("This is the South KOria number\n");
    }
    else
    {
        printf("I DONT KNOW THIS NUMBER IS WHICH PLACE!!\n");
    }
}