#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    string str1;
    int n;

    getline(cin,str);    //getline ignores leading spaces to get the entire sentence
    getline(cin,str1);
    cin >>n;
    for(int i=n;i<str.size();i=i+n+str1.size()){
    str.insert(i,str1);
    }
    cout << str << endl;
    
}