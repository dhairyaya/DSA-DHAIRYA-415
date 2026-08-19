#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >>m;
    vector<int> a(n,0);
    vector<int> b(m,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    vector<int> ans;
    for(int i=0;i<m;i++){
      int cnt=0;
       for(int j=0;j<n;j++){
        if(a[j]>b[i]){
            cnt++;
        }
       }
       ans.push_back(cnt);
    }
  for(int i=0;i<m;i++){
        cout << ans[i];
    }
}