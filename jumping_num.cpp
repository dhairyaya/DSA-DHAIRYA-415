#include<bits/stdc++.h>
using namespace std;
bool jump_num(int a){
    int b=a;
    int d1,d2;
    while(true){
        d1=a%10;
        a/=10;
     if(a==0) return true;
        d2=a%10;
        a/=10;
        if((abs(d1-d2))!=1){
          return false;
  }
}
    return true;
}

int main(){
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        if(jump_num(i)){
            cout << i << " ";
        }
    }
}