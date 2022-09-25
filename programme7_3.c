//3. Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include<stdio.h>
int main()
{
    int cur=1,prev=0,nxt=0,i,a;
    printf(" Enter any number :");
    scanf("%d",&a);
    if(a==1)
    { 
        printf(" yes %d is in Fibonacci series",a);
        
    }
    else
    {
    
        for(i=0;1;i++)
        {
            nxt=cur+prev;
            prev=cur;
            cur=nxt;
        
            if(nxt==a)
            {
                printf("yes %d is in Fibonacci series",a);
                break ;
            }
            if(nxt>a)
            {
                printf("no %d is not in Fibonacci series",a);
                break ;
                
            }
        }
    }
    return 0;
}  
