//merging two sorted arrays
#include <stdio.h>
int main() {
    int a[100], b[100], c[200];  
    int n, m, i, j, k;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    printf("Enter the number of elements in second array: ");
    scanf("%d", &m);
    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second sorted array:\n");
    for(j = 0; j < m; j++)
     {
        scanf("%d", &b[j]);
    }
    i = j = k = 0;
    while(i < n && j < m) {
        if(a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while(i < n) {
        c[k++] = a[i++];
    }
    while(j < m) {
        c[k++] = b[j++];
    }
    printf("Merged sorted array:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
