#include<bits/stdc++.h>

using namespace std;
bool prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0 ) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector < int > arr;
    
    for (int i = 2; i <= 11 ; i++) {
        if (prime(i)) arr.push_back(i);
    }
    vector < int > v1;
    for (int i = 1; i < arr.size(); i = i + 2) {
        int p = arr[i-1] * arr[i];
        v1.push_back(arr[i-1]);
        if(v1.size()==n) break;
        v1.push_back(arr[i]);
        if(v1.size()==n) break;
        v1.push_back(p);
        if(v1.size()==n) break;
        
    }
    
    if(v1.size()<n) v1.push_back(arr[arr.size()-1]);
    for (int x: v1) {
        cout << x <<" ";
    }
}