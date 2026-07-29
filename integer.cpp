#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int cnt=0;
    for(int i=min(a,c);i=max(b,d);i++){
    if((i>=a || i<=b) && (i>=c || i<=d)){  
        cnt ++;
    }
} cout << cnt << endl;
}
