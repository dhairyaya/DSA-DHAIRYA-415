#include<stdio.h>
void tower_of_hanoi(int n, char source, char mid, char last) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, last);
        return;
    }
    tower_of_hanoi(n - 1, source, last, mid);
    printf("Move disk %d from %c to %c\n", n, source, last);
    tower_of_hanoi(n - 1, mid, source, last);
}
int main(){
    int n;
    printf("Enter the number of disks:");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','C');
    return 0;
}