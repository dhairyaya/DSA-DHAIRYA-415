#include<bits/stdc++.h>
using namespace std;

int top=-1;
char x;
int n;
void push(char sTack[],int n,char x)
{
    if(top==n-1)
     cout << "Overflow" << endl;
    else
     sTack[++top]=x;
}

char pop(char sTack[],int n)
{
    if(top==-1)
    cout << "Underflow" << endl;
    else{
         x=sTack[top--];
    }
    return x;
}

int priority(char x)
{
    if(x=='(')
     return 0;
    
    if(x=='+' || x=='-' )
    return 1;

    if(x=='*' || x=='/')
    return 2;
    
    if(x=='^')
    return 3;
    return 0;

}

void display(char sTack[],int n)
{
    for(int i=top;i>=0;i--)
    {
        cout << sTack[i] << " ";
    }
}
int main()
{
    int choice;
    cout << "Enter the size of sTack" << endl;
    cin >> n;
    char sTack[n];
    string exp;
    cin >> exp;
    char ch;
    for(int i=0;i<exp.length();i++)
    {
        ch=exp[i];
        if(ch=='(')
         push(ch);
        
        else if(isalnum(ch))
         push(ch);

        else if(ch==')')
        {
            while((char y=pop()!='(')
            {
                cout << y;
            }

        }
        else if(ch=='^')
        {  
            push(ch); 
        }
       else{
         while(!())
       }
    }
    do{
        cout << "Enter 1.Push \n 2.Pop \n 3.Display" << endl;
        cin >> choice;
        switch(choice)
        {
        case 1:
        cout << "Enter element to be inserted:" << endl;
        cin>>x;
        push(sTack,n,x);
        break;
        case 2:
        cout << endl << "Popped Element=" << pop(sTack,n) << endl;
        break;
        case 3:
        display(sTack,n);
        break;
        default: cout<< endl<< "You have entered a worng choice";
        }
        cout << "Enter 4 to exit"<< endl;
  } while(choice!=4);
}

