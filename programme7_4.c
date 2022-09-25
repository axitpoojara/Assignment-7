//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int a,b,c,i,hcf;
    printf(" Enter any two numbers :");
    scanf("%d%d",&a,&b);
    c=a>b?b:a;
    for(i=1;i<=c;i++)
    {
        if((a%i==0)&&(b%i==0))
        hcf=i;
    }
    
    printf(" HCF of %d and %d is %d",a,b,hcf);
    return 0;
}