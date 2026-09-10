#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[n];
    }
    int max_pr=0;
    for(int i=0;i<n;i++){
    int pr=0;
    for(int j=i+1;j<n;j++){
       pr=a[j]-a[i];
       max_pr=max(max_pr,pr);
    }
    cout << max_pr << endl;
   }
}