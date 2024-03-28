#include<stdio.h>
int main(){
    int arr[4][3];
    for(int i=0;i<4;i++){
    printf("enter number of row :");
    scanf("%d",&arr[i]);
   for(int j=0;j<3;j++){
    printf("Enter number of coloum :");
    scanf("%d",&arr[j]);
   printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
    }
    }
return 0;
    
}