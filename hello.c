#include<stdio.h>
int main()
{
    int arr[100];
    int n,max=0;
    printf("The no. of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        max=arr[i];
        if (arr[i+1]>max)
        max=arr[i+1];
    }
    