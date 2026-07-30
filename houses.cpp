#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        int n,x;
        cin >> n >> x;
        int ai[n];
        int d;
        for(int i=0;i<n;i++){
            cin >> ai[i]; 
            if(ai[i]<x)  d=i+1;    
        }
        cout << d << endl;
    }
}