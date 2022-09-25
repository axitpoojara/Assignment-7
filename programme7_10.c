//10. Write a program to print all Armstrong numbers under 1000

//cube of 1 + cube of 2 + cube of 5 = 125 then 125 is a armstrong number
// here 1+8+125 != 125 so 125 is not an armstrong number
//cube of 1 + cube of 5 + cube of 3 = 153 then 153 is a armstrong number
// here 1+125+27 =153 so 153 is an armstrong number
    #include<stdio.h>
    int main()
{
    int n , r , s ,x;
    printf ( "Armstrong number under 1000 are \n ") ;
    for(n=1;n<1000;n++)
    {   s=0;
        x=n;
        while(x!=0)
        {
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
            {printf (" %d \n ", n );}
    }
    return 0;
}