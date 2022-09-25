//8. Write a program to find next Prime number of a given number

#include<stdio.h>
int main()
{
    int start,i,n,flag=0;
    printf("Enter any number :");
    scanf("%d",&start);
    for(i=start;1;i++)
    {   
        flag=0;
        for(n=2;n<i;n++)
        {
            if(i%n==0)
            flag=1;
        }
        if(flag==0)
        {
            printf("%d",i);
            break;
        }
        
    }
    return 0;
}