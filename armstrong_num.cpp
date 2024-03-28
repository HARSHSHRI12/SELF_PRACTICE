/*#include<stdio.h>
int main(){
    int n,temp,result,sum=0,digit;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    //while(temp !=0)
    while(temp>0){
       digit= temp%10;
         n/10;
         sum+=digit*digit*digit;   
        temp/=10;
 }
 printf("%d\n",sum);
 return 0;
}*/
#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while(temp > 0) {
        digit = temp % 10; // Get the last digit
        sum += digit * digit * digit; // Cube the digit and add to sum
        temp /= 10; // Remove the last digit
    }

    printf("Sum of cubes of digits: %d\n", sum);
    return 0;
}

