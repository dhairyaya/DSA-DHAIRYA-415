#include<bits/stdc++.h>
using namespace std;

int n;
int top=-1;
int sTack[100];
void push(int decimal)
{
    if(top==100-1)
    cout << "Overflow" << endl;
    else
    sTack[++top]=decimal;
}

void pop(){
    if(top==-1)
    cout<<"Underflow";

void push(int x)
 {
    if (top == 99)
        cout << "Overflow" << endl;
    else
        st[++top] = x;
}

int pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
        return -1;
    } else {
        return st[top--];
    }
}

int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    int decimal = 0, power = 1;

    while (num > 0) {
        int rem = num % 10;
        num = num / 10;
        decimal += rem * power;
        power *= 2;
    }

    push(decimal);

    cout << "The Decimal number is: " << pop() << endl;

    return 0;
}

    else
    cout << stack[top] << endl;
}
int main()
{
    int power=1,decimal=0;
    cout << "Enter the binary number:" << endl;
    cin >> n;
    int top=-1;
    int stack[100];
    while(num>0)
    {
        int rem=num%10;
        int num=num/10;
        decimal=decimal+rem*power;
        power=power*2;
        push(decimal);
    }
    cout << "The Decimal number is:" << pop()
}