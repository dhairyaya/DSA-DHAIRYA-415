#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    k=k%n;
    int a=0;
    string s2;
    for(int i=0;i<n;i+=k){
         string s1=s.substr(i,k);
         if(a==0) {
            s2+=s1;
            a++;
         }
         else{
            (reverse(s1.begin(),s1.end()));
            s2+=s1;
            a=0;
         }
    }
    for(int i=0;i<n;i++){
        cout<<s2[i];
    }
}