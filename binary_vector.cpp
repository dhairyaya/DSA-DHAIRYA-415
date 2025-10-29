#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6};
    int value=6;
    if(binary_search(v.begin(),v.end(),value))
    {
        cout << "Element found";
    }
    else {
        cout << "Element not found";
    }
    return 0;
}