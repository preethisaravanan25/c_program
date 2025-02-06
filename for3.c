#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int sum=0;
    for(i=1;i<n;i++){
    sum=sum+i;
    printf("sum=%d\n",sum);
}
return 0;
}