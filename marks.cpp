#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int amin,bmin,cmin,Tmin;
    cin >>amin >> bmin >> cmin >> Tmin;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if((a>=amin && b>=bmin && c>=cmin)|| ((a+b+c)>=Tmin)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    }
