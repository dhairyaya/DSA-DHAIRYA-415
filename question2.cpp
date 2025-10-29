#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char st[100];
int top=-1;
void push(char x) {
    st[++top]=x;
}
char pop() {
    if(top==-1)
        return -1;
    else
        return st[top--];
}
int priority(char x) {
    if (x =='(')
        return 0;
    if (x=='+'||x=='-')
        return 1;
    if (x=='*'||x=='/')
        return 2;
    if (x=='^')
        return 3;
    return 0;
}
int main(){
    string exp;
    cin>>exp;
    char ch;
    for (int i=0;i<exp.length();i++){
        ch=exp[i];
        if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
            cout<<ch; 
        else if(ch=='(')
            push(ch);
        else if(ch==')'){
            while(st[top]!='(')
                cout<<pop();
            pop(); 
        } else {
            while (top!=-1&&priority(st[top])>=priority(ch))
                cout<<pop();
            push(ch);
        }
    }
    while(top!=-1)
        cout<<pop();
    return 0;
}
