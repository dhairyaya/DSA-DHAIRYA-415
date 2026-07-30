#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
      int n,k;
      cin >> n >> k;
      int d=0; 
      if(n==k) cout << (d=1) << endl;
      if(n<k)  cout << (d=k/n) << endl;
    }
}