#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int s1=n*x;
        int s2=(n/2)*y + (n%2)*x;  //if n is odd then we have to add x to the sum of (n/2)*y
        cout<< max(s1,s2) << endl;
    }
}
