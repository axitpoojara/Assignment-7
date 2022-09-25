//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int cur=1,prev=0,nxt,i,a;
    printf(" Enter any number :");
    scanf("%d",&a);
    printf(" first %d terms of Fibonacci series is as under \n",a);
    printf("1");
    for(i=1;i<a;i++)
    {
        nxt=cur+prev;
        prev=cur;
        cur=nxt;
        printf(" %d ",nxt);
    }
    return 0;
}