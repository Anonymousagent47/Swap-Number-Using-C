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


//iF YOU WANTED TO DO IT IN DO..WHILE LOOP

do{
    mod=n%10;
    rev = rev*10+mod;
    num/=10;
}while(num !=0);
printf("Your Answer is %d",rev);


//IF YOU WANTED TO DO IN FOR LOOP

for(num;num!=0;num/=10){
    mod=num%10;
    rev=rev*10+mod;
}
printf("Your Answer is %d",rev);
