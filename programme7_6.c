//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int a,i,flag=0;
    for(a=1;a<=100;a++)
    {   
        flag=0;
        for(i=2;i<=a/2;i++)
        {   
            if(a%i==0)
                flag=1;
        }
        if(flag==0)
            printf("%d \t",a);
    }
        return 0;
}
/*another solution
#include<stdio.h>
int main()
{
    int x,i;
    for(x=2;x<=100;x++)
    {
        for(i=2;i<=x;i++)
        {
            if(x%i==0)
            {
                if(x==i)
                    printf("%d\t",x);
                    break;
            }
        }
    }
    return 0;
}*/

