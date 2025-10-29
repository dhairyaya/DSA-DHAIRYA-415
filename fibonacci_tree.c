#include<stdio.h>
int DAT[100];
// int fib(int n)    not optimized
// {
//     if((n==1) || (n==2))
//     {
//         return n-1;
//     }
//     else{
//         return (fib(n-1) + fib(n-2)); 
//     }
// }
int optimized_fib(int n)
{
   if((n==1) || (n==2))
    {
        return DAT[n]=n-1;
    }
    else{
        if (DAT[n]==0)
        {
            return DAT[n]=fib(n-1) + fib(n-2);
        }
        
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d \t",fib(i));
    }
}