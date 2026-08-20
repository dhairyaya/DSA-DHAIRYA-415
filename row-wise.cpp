#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        int max=INT_MIN;
        int min=INT_MAX;
        for(int j=0;j<m;j++){
            sum+=a[i][j];
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
        cout << sum << " " << max << " " << min << endl;
    }
}