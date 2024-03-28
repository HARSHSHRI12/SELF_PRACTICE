// There are four type of function aspect calling--------
/*1. function with argument without return value.
2. function with argument with return value.
3. function  without argument with return value.
4. function without argument without return value. */

 #include<stdio.h>
void add(int,int );
int main(){
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
   add(a,b);
    return 0;

}
void add(int a,int b){
    printf("the sum is %d",a+b);
}
//-----------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int mult(int,int);
int main(){
int  result,a,b;
printf("Enter two number :");
scanf("%d%d",&a,&b);
result=mult(a,b);
printf("the multiplication is %d",result);
return 0;
}
int mult(int a, int b){
    return (a*b);
}
//---------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int subtract();
int main(){ 
    int result;
   result=subtract();
    return 0;
}
int subtract(){
 int a,b;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    return (a-b);
}
//-------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
void add();
    int main(){
        add();
        return 0;
    }
void add(){
    int principal,time,rate;
    float si;
    printf("Enter principal value ,time , rate :");
    scanf("%d %d %d",&principal,&time,&rate);
    si=principal*time*rate/100.0;
    printf("the Simple intrest is : %f",si);
    }
// --------------------------------------------------------------------------------------------------------------------------------------

