#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int> &a,vector<int> &ans,int c, int d){
    while(c<d){
        ans.push_back(a[c]);
        c++;
    }
   }
int main(){
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int Min=INT32_MAX;
    int Max=INT32_MIN;

    int max_index=0;
    int min_index=0;
    for(int i=1;i<n;i++){
        if(arr[i]<Min){
            Min=arr[i];
            min_index=i;
        }
        if(arr[i]>Max){
            Max=arr[i];
            max_index=i;
        }
    }
    vector <int> ans;
    if(max_index>min_index){
      subarray(arr,ans,min_index,max_index);
      subarray(arr,ans,0,min_index);
      subarray(arr,ans,max_index,n);
    }
    else{
        subarray(arr,ans,min_index,n);
        subarray(arr,ans,0,max_index);
        subarray(arr,ans,max_index,min_index);
    }
     for(int i=0;i<n;i++){
        cout<< ans[i];
    }
}