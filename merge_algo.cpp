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
    int n=v1.size();
    int m=v2.size();
    v3.resize(m+n);

    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

    cout << "Merged vector: ";
    for (int x : v3) cout << x << " ";
    cout << "\n";

    return 0;
}


