#include<stdio.h>
int main(){
    int i,t;
    printf("Enter tables value:");
    scanf("%d",&t);
    
    for(i=1;i<=10;i++)
    {
       printf("%d\n",i*t);

    }
    return 0;
}