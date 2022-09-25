//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
#include<math.h>
int power_function(int digit , int power);
int main()
{
    int num,t,temp,digit,count=0,rem,sum=0;
    printf(" enter any number :");
    scanf("%d",&num);
    t=num;temp=num;
    while(num!=0)
    {
        digit=num%10;
        count++;
        num=num/10;
    }
    while(t!=0)
    {
        rem=t%10;
        sum=sum+power_function(rem,count);
        t=t/10;
    }
    if(sum==temp)
        printf(" %d is armstrong number",temp);
    else
        printf(" %d is not an armstrong number",temp);
    return 0;
}
int power_function(int digit, int power){
    int c = 1;
    for(int i = 1; i<= power; i++){
         c *= digit;
    }
    return c;}