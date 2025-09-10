#include<stdio.h>
int main()
{
    int a[100];
    int b[100];
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
   return 0; 
}