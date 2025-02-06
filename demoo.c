#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18){
        printf("elegible for voting");
    }
    else
    {
        printf("Not elegible for voting");
    }
    return 0;
    }