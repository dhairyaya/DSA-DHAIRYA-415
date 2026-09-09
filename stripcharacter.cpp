#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    for (int i = K; i < N - K; i++) {
        cout << S[i];
    }
    return 0;
}