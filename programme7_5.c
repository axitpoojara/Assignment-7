//5. Write a program to check whether two given numbers are co-prime
//numbers or not
#include<stdio.h>
int main()
{
    int num1,num2,c,i,hcf;
    printf(" Enter any two numbers :");
    scanf("%d %d",&num1,&num2);
    c=num1>num2?num2:num1;
    for(i=1;i<=c;i++)
        {
            if((num1%i==0)&&(num2%i==0))
                hcf=i;
        }
    if(hcf==1)
        printf(" %d and %d both are co-prime numbers",num1,num2);
    else
        printf(" %d and %d both are not co-prime numers",num1,num2);
    return 0;
}