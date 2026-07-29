#include<stdio.h>
void merge_sort(int arr[], int l,int h)
{
    if(l<h)
    {
        int m=(l+h)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,h);
        int i=l,j=m+1,k=l;
        int b[100];
        while(i<=m && j<=h)
        {
            if(arr[i]<arr[j])
            {
                b[k++]=arr[i++];
            }
            else
            {
                b[k++]=arr[j++];
            }
        }
        while(i<=m)
        {
            b[k++]=arr[i++];
        }
        while(j<=h)
        {
            b[k++]=arr[j++];
        }
        for(int p=l;p<=h;p++)
        {
            arr[p]=b[p];
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[100];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    printf("Merge Sorted elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}