#include<stdio.h>
int main(){
    int a;
    printf("Enter a integer value:");
    scanf("%d",&a);
    float b;
    printf("Enter a float value:");
    scanf("%f",b);
    char c;
    printf("Enter a character value:");
    scanf("%c",c);
    char d[6];
    printf("Enter the string value:");
    scanf("%s",&d);
    double e;
    printf("Enter the double value:");
    scanf("%1f",&e);
    long int f;
    printf("Enter the long int value:");
    scanf("%1d",&f);
    printf("%d,a");
    printf("%f,b");
    printf("%c,c");
    printf("%s,d");
    printf("%1f,e");
    printf("%1d,f");
    return 0;
}