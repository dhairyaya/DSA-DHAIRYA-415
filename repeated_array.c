#include<stdio.h>
int main()
{
    int a[100];
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
        int flag=0;
        for(int j=0;j<n;j++)
        {
           if(i!=j && a[i]==a[j])
           {
           flag=1;
           break;
        }
      }  
        if(flag==1)
            printf("%d is repeated\n",a[i]);
        else
            printf("%d is not repeated\n",a[i]);
    }
    return 0;
}
