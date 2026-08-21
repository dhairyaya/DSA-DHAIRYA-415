#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin >>s;
    int sum=0;
    string s1="";
    for(int i=0;i<n;i++){
        if(isdigit(s[i])) {
            int digit=s[i]-'0';
            sum+=(digit*digit);
        }
        else { s1.push_back(s[i]);
    }
    }
    int k=sum; 
    int x=s1.size();
    if(sum%2==0) {
        k=k%x;
        s1=s1.substr(x-k,x) + s1.substr(0, x-k);
    }
    else{
        k=k%x;
        s1=s1.substr(k, x - k) + s1.substr(0, k); 
    }

    cout << s1 << endl;
}