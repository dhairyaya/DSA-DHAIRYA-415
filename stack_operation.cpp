#include<bits/stdc++.h>
using namespace std;

int top=-1;
int x;
int n;
void push(int stack[],int n,int x)
{
    if(top==n-1)
     cout << "Overflow" << endl;
    else
     stack[++top]=x;
}

int pop(int stack[],int n)
{
    if(top==-1)
    cout << "Underflow" << endl;
    else{
         x=stack[top];
         top--;
    }
    return x;
}

void display(int stack[],int n)
{
    for(int i=top;i>=0;i--)
    {
        cout << stack[i] << " ";
    }
}
int main()
{
    int choice;
    cout << "Enter the size of stack" << endl;
    cin >> n;
    int stack[n];
    do{
        cout << "Enter 1.Push \n 2.Pop \n 3.Display" << endl;
        cin >> choice;
        switch(choice)
        {
        case 1:
        cout << "Enter element to be inserted:" << endl;
        cin>>x;
        push(stack,n,x);
        break;
        case 2:
        cout << endl << "Popped Element=" << pop(stack,n) << endl;
        break;
        case 3:
        display(stack,n);
        break;
        default: cout<< endl<< "You have entered a worng choice";
        }
        cout << "Enter 4 to exit"<< endl;
  } while(choice!=4);
}
