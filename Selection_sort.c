#include<stdio.h>
void selection_sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}


int main()
{
    int n,a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    printf("Selection sorted elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}