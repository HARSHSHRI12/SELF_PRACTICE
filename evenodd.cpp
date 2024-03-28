#include<stdio.h>
void evenodd();
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
 evenodd();
return 0;
}
 void evenodd()
{
   int a;
    if(a%2==0)
    {
        printf("The number is even...");
    }
else 
{
    printf("The number is odd....");
}   
}