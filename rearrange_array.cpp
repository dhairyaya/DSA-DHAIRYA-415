#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    vector<int> b=a;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    int c=0,d=0;
    vector<int> c1;
    for (int i = 0; i < n; i++) {
        if(i%2==0)  c1.push_back(a[c++]);
        else c1.push_back(b[d++]);
    }
    for (int i = 0; i < n; i++) {
        cout << c1[i] << " ";
    }
}