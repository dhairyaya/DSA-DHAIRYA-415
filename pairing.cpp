#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int d=b-a;
        if(d%3==0 || d%3==1){
        cout<< "YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
