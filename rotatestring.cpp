#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k>n) 
    {
        int nor=n%k;
        string s1=s.substr(nor,n-nor)+s.substr(0,nor);
        cout << s1 << endl;
    }
    else
    {
        int nor=k%n;
        string s1=s.substr(nor,n-nor)+s.substr(0,nor);
        cout << s1 << endl;
    }
}