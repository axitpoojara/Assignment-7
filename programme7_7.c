//7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int start,end,i,n;
    printf("Enter any two  numbers :");
    scanf("%d %d",&start,&end);
    for(i=(start+1);i<=(end-1);i++)
    {
        for(n=2;n<=i;n++)
        {
            if(i%n==0)
            {
                if(i==n)
                printf("%d\t",i);
                break;
            }
        }
    }
    return 0;
}