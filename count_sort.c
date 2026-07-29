#include<stdio.h>
void count_sort(int a[], int n)
{
  int max=a[0];
  int count[100]={0};
  int b[100];
  for(int i=1;i<n;i++)
  {
    if(max<a[i])
    {
        max=a[i];
    }
  }
  for(int i=0;i<n;i++)
  {
    count[a[i]]++;
  }
  for(int i=1;i<=max;i++)
  {
    count[i]=count[i]+count[i-1];
  }
  for(int i=n-1;i>=0;i--)
  {
    b[count[a[i]]-1]=a[i];
    count[a[i]]--;
  }
  for(int i=0;i<n;i++)
 {
    a[i] = b[i];
 }
}

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[100];
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    count_sort(a,n);
    printf("Count Sorted elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}