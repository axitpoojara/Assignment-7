//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int a,i,cur=1,prev=0,nxt=0;
    printf(" Enter any number :");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        nxt=cur+prev;
        prev=cur;
        cur=nxt;
    }
    printf("%d th term of Fibonnaci series is  %d",a,nxt);
    return 0;
}