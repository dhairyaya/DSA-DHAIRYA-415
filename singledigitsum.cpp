#include<bits/stdc++.h>
using namespace std;
int sod(int a){
    int sum=0;
    while(a>0){   
    sum=sum+(a%10);
    a/=10;
} return sum;
}
int main(){
 int n,k;
 cin >>n;
 cin >>k;
 int c=sod(n);
  c=c*k;
  while((c/10)!=0){
    sod(c);
    
  }
  cout<<c;
}