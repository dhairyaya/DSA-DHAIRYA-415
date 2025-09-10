#include<stdio.h>
int main()
 {
    int arr[6]={22,34,12,3,45,56};
    int a;
    printf("Enter index (0 to 5) to delete: ");
    scanf("%d",&a);
    for(int i=a;i<5;i++)
    {
      arr[i]=arr[i+1];
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
 }