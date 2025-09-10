#include<stdio.h>
int main()
{
    int arr[]={3,34,44,78,89};
    int flag=0;int a;
    printf("Enter the no. to be searched:");
    scanf("%d",&a);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==a)
        {
            flag++;
            break;
        }
    }
          if(flag==1)
            printf("ELement found");
          else
            printf("Element not found");
          
    return 0;
}