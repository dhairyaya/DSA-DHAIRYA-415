#include<stdio.h>
void insertion_sort(int a[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int n, a[100];
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    insertion_sort(a, n);
    printf("Sorted elements are:");
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}