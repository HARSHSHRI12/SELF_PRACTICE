/*#include<stdio.h>
int main(){
    int var=5;
    int let=10;
    printf("the value of var is :%d\n",var);
    printf("the address of var is:%p",&var);
     
    printf("the value of var is :%d\n",let);
    printf("the address of var is:%p",&let);
      return 0;
    }*/
   // ------------------------------------------------------------------------------------------------------------------------------------
   /* #include<stdio.h>
    int main(){
        int *p,c;
        c=10;
        p=&c;
        printf("the value of p is:%u",*p);
        return 0;
    }*/
    //-----------------------------------------------------------------------------------------------------------------------------------
    /*#include<stdio.h>
    int mainn(){
        int num[6],sum=0;
        printf("Enter 6 number :");
        for(int i=0;i<6;i++){
            scanf("%d",&num[i]);
            scanf("%d",num+i);
            sum+=num[i];
            sum+=*(num+i);
        }
        printf("sum=%d",sum);
            return 0;
    }*/
    //-----------------------------------------------------------------------------------------------------------------------------------
    #include<stdio.h>
    void swap(int *n1, int *n2);
    int main(){
        int num1=5 , num2=10;
        //sswap(&num1,&num2);
        printf("The value of num1 :%d\n",num1);
        printf("The value of num2 :%d",num2);
        return 0;
    }
    void swap(int *n1, int *n2){
        int temp;
        temp=*n1;
        *n1=*n2;
        *n2=temp;
        printf("the value of n1 :%d",*n1);
        printf("the value of n2 :%d",*n2);

    }




    