#include<bits/stdc++.h>
using namespace std;
int armstrong_number(int a){
     int b=a;
     int c=0;
     int sum=0;
     while(a>0){
        a/=10;
        c++;
     }
      while(b>0){
        int d=b%10;
        sum+=pow(d, c);
        b/=10;
      }
      return sum;
    }
int main(){
    int low, up;
    cin >> low;
    cin >> up;
    for(int i=low;i<up;i++){
        if(i==armstrong_number(i)){
            cout << i << " ";
        }
    }
}

