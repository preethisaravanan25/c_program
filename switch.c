#include<stdio.h>
int main(){
    int num1,num2;
    int choice,Result;
    printf("enter your choice(1,2,3,4):");
    scanf("%d",&choice);
    printf("enter the num1:");
    scanf("%d",&num1);
    printf("enter the num2:");
    scanf("%d",&num2);
    switch(choice){
        case 1:
        Result=num1+num2;
        printf("%d", Result);
        break;
        case 2:
        Result=num1-num2;
        printf("%d", Result);
        break;
        case 3:
        Result=num1*num2;
        printf("%d", Result);
        break;
        case 4:
        Result=num1/num2;
        printf("%d",Result);
        break;
        default:
        printf("unmatched");
        break;
        }
     return 0;

}