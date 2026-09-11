#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,r;
    cin >> s >> r;
    int t;
    cin >> t;
    int len=s.length();
    string substring;
    while(t--){
        int a;
        cin >> a;
        if(a>0)  {
            a=a%len;
            substring = s.substr(len - a, a) + s.substr(0, len - a);
        } 
        else {
            a+=len;
            a=a%len;
            substring = s.substr(a, len - a) + s.substr(0, a);  
        }  
    }
    if(substring==r) cout << "Password Accepted" << endl;
    else cout << "Try Again"  << endl;
}