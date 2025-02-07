#include<stdio.h>
int add(int num1, int num2);
int sub(int num1,int num2);
int mul(int num1,int num2);
int div1(int num1,int num2);
int div2(int num1,int num2);
int main(){
    int num1,num2 , result1,result2,result3,result4,result5;
    int choice,Result;
    printf("\n enter your choice(1,2,3,4,5):");
    scanf("%d",&choice);
    printf("\n enter the num1:");
    scanf("%d",&num1);
    printf("\nenter the num2:");
    scanf("%d",&num2);
    switch(choice){
        case 1:
            result1=add(num1,num2);
            printf("%d", result1);
            break;
        case 2:
            result2=sub(num1,num2);
            printf("%d", result2);
            break;
        case 3:
            result3=mul(num1,num2);
            printf("%d", result3);
            break;
        case 4:
            result4=div1(num1,num2);
            printf("%d", result4);
            break;
        case 5:
            result5=div2(num1,num2);
            printf("%d", result5);
            break;
        default:
            printf("unmatched");
            break;
    }
     return 0;
}

int add(int num1, int num2){
    int result=num1+num2;
    return result;
}
 int sub(int num1, int num2){
    int result=num1-num2;
    return result;
}
int mul(int num1, int num2){
    int result=num1*num2;
    return result;
}
int div1(int num1, int num2){
    int result=num1/num2;
    return result;
}
int div2(int num1, int num2){
    int result=num1%num2;
    return result;
}