#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1, v2, v3;
    int value;

    cout << "Enter elements of first vector: ";
    while (true) {
        cin >> value;
        if (value == -1) break;
        v1.push_back(value);
    }

    cout << "Enter elements of second vector: ";
    while (true) {
        cin >> value;
        if (value == -1) break;
        v2.push_back(value);
    }

    int n = v1.size(), m = v2.size();
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (v1[i] < v2[j]) {
            v3.push_back(v1[i]);
            i++;
        } else {
            v3.push_back(v2[j]);
            j++;
        }
    }

    while (i < n) {
        v3.push_back(v1[i]);
        i++;
    }
    while (j < m) {
        v3.push_back(v2[j]);
        j++;
    }
    cout << "First vector: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";

    cout << "Second vector: ";
    for (int x : v2) cout << x << " ";
    cout << "\n";

    cout << "Merged vector: ";
    for (int x : v3) cout << x << " ";
    cout << "\n";

    return 0;
}
