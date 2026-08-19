#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(auto &n: arr){
        for(auto &m: n){
            cin >> m ;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+1<n && j+1<m)  swap(arr[i][j],arr[i+1][j+1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
} 