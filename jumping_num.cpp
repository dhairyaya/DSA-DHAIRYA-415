#include <bits/stdc++.h>
using namespace std;

bool jump_num(int a) {
    if (a < 10)
        return true;

    while (a > 9) {
        int d1 = a % 10;
        a /= 10;

        int d2 = a % 10;

        if (abs(d1 - d2) != 1)
            return false;
    }
return true;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        if (jump_num(i)) {
            cout << i << " ";
        }
    }

    return 0;
}