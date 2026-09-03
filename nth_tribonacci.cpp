#include<bits/stdc++.h>
using namespace std;
int main(){   
 int n;
 cin >> n;
 int a=1,b=1,c=1;
 int s=0;
 for(int i=3;i<=n;i++){
    s=a+b+c;
    a=b;
    b=c;
    c=s;
 }
 cout << s;
}