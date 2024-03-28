#include<stdio.h>
#include<string.h>
int main(){
    char fname[10]="harsh";
    char lname[20]="shrivastava";
    strncat(fname,lname,3);
    printf("the name is %s\n\b",fname);
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
int main(){
    char str1[10];
    char str2[20];
    printf("enter a value of str1 :");
    scanf("%s",&str1);
    printf("Enter a value of str2 :");
    scanf("%s",&str2);
    strncpy(str1,str2);
    printf("the strcpy value is : %s\n",str1);
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
int main(){
    char ch[20]="harsh";
    printf("Enter a character :");
    scanf("%s",&ch);
    printf("The character is :%d",strlen(ch));
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------