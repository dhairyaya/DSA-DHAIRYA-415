#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> arr(n, vector<int>(m));
    for(auto &n: arr){
        for(auto &m: n){
            cin >> m ;
        }
    }
    for(int i=0;i<n/2;i++){
        int x=0;
        for(int j=m-k;j<m;j++){
            swap(arr[i][j],arr[n-i-1][x]);
            x++;
            if(x==k) break;
        }
    }
    for(auto& n: arr){
        for(auto& m: n){
            cout << " "<< m;
        }
        cout << "" << endl;
    }
} 