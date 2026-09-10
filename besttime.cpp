//Brute force

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin >> a[i];
//     }
//     int max_pr=0;
//     for(int i=0;i<n;i++){
//     int pr=0;
//     for(int j=i+1;j<n;j++){
//        pr=a[j]-a[i];
//        max_pr=max(max_pr,pr);
//     }
//    }
//    cout << max_pr << endl;
// }


// Optimal approach

#include<bits/stdc++.h>
using namespace std;

int max_profit(vector<int> &b) {
    int min_price=INT_MAX;
    int maxprofit=0;
    for(int price:b){
        if(price<min_price)   
        min_price=min(price,min_price);
        maxprofit=max((price-min_price),maxprofit);
    }
    return maxprofit;
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << max_profit(a);
}