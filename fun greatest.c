#include<stdio.h>
int greatest(int num);
int main(){
    int num,n;
     
    printf("enter the three digit integer:");
    scanf("%d",&num);
    n=greatest(num);
    printf("The graetest num is:%d", n);
    return 0;
   
}
int greatest(int num){
   
   int digit1=  num/100;
   int digit2=  num/10%10;
   int digit3=  num%10;

   int greatest = digit1;
   if (digit2 > greatest) {
       greatest = digit2;
   }
   if (digit3 > greatest) {
       greatest = digit3;
   }

   return greatest;
}
