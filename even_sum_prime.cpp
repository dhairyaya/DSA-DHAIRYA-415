#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int a,b;
    cin >> a >> b;
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && digitSum(i) % 2 == 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}