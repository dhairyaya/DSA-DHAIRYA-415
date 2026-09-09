#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int b=0;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[b]);
            b++;
        }
    }
    for(int i=0;i<n;i++){
        swap(ans[i],a[i]);
        
    }
    for(int x:ans){
        cout << x << " ";
    }
}
