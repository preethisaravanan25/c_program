#include<stdio.h>
int main(){
     int Mark1,Mark2,Mark3,Mark4,Mark5,total;

    printf("Enter the Mark1=");
    scanf(" %d",&Mark1);
    printf("Enter the Mark2=");
    scanf(" %d",&Mark1);
    printf("Enter the Mark3=");
    scanf(" %d",&Mark3);
    printf("Enter the Mark4=");
    scanf(" %d",&Mark4);
    printf("Enter the Mark5=");
    scanf(" %d",&Mark5);

    total=Mark1+Mark2+Mark3+Mark4+Mark5;
    
    if(total>=450 && total<500)
    {
    printf("Grade A");
    }

    else if(total>=350 && total<450)
    {
    printf("Grade B");
    }

    else if(total>=300 && total<350){
    printf("Grade C");
    }

    else if(total>=250 && total<300){
    printf("Grade D");
    }

    else if(total>=200 && total<250){
    printf("Grade E");
    }

    else
    {
        printf("Fail");
    }
    
    return 0;
}