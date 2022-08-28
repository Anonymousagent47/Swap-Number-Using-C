#include<stdio.h>
int main()
{
    int num,rev=0,mod;
    printf("Enter Number: ");
    scanf("%d",&num);

    while(num !=0 ){
        mod=num%10;
        rev= rev*10+mod;
        num/=10;
    }
    printf("Reversed Number is: %d",rev);
    return 0;
}