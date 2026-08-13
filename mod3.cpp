#include<bits/stdc++.h>
using namespace std;
int sod(int n){
    int sum=0;
    while(n>0){   
    sum=sum+(n%10);
    n/=10;
}
   return sum;
}
int main(){
    int start,end;
    cin >> start;
    cin >> end; 
    int cnt=0;
    for(int i=start;i<=end;i++){
        if((i%3==0)&&(sod(i)%2==0)){
            cnt++;
        }
    }
    cout << cnt;
}