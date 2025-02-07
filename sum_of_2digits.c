#include<stdio.h>
int sumOfDigits(int num);
int main(){
   int num,sum;
   printf("Enter a number to calculate sum :");
   scanf("%d",&num);
   sum=sumOfDigits(num);
   printf("the sum of digits is %d",sum);
   return 0;

}

int sumOfDigits(int num){
    int sum  = 0;
    while(num!=0){
        int extr=num%10;
        sum=sum+=extr;
        num/=10;
    }
    return sum; 
}