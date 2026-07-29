#include<stdio.h>
int power(int n,int wop)
{
 if(wop==0)
 {
    return 1;
 }  
 else{
    return n*power(n,wop-1);
 }
}

int main()
{
    int base,n;
    printf("Enter the number and the power:");
    scanf("%d %d",&n,&base);
    int result=power(n,base);
    printf("%d^%d=%d",n,base,result);
}