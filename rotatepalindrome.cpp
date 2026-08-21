#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin >> a>>b>>k;
    string s1;
    string s2;
    string s3;
    cin >>s1;
    cin  >> s2;
    string S1;
    string S2;
    int p=k%a;
    int q=k%b;
    S1=s1.substr(a-p,p)+s1.substr(0,a-p);
    S2=s1.substr(q,b-q)+s1.substr(0,q);
    s3+=S1+S2;
    string compare=s3;
    reverse(compare.begin(),compare.end());
    if(s3==compare) cout << s3 <<""<< "True";
    else cout << s3 << " "<<"False";
}