#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char optr;
    float n1,n2;
    cout<<"Enter First number:";
    cin>>n1;
    cout<<"Enter Operators(+,-,*,/)";
    cin>>optr;
    cout<<"Enter Second number:";
    cin>>n2;
    switch(optr)
    {
        case'+':
        cout<<"Result: "<<n1+n2;
        break;
       case'-':
        cout<<"Result: "<<n1-n2;
        break;
        case'/':
        if(n2!=0)
        {
            cout<<"Result: "<<n1/n2;
        }
        else
        {
            cout<<"Error! Division by zero";
        }
        break;
         case'*':
        cout<<"Result: "<<n1*n2;
        break;
        default:
        cout<<"Error!!Invalid operator";
    }
getch();
return 0;
}
