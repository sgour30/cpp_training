#include<iostream>
using namespace std;
int main()
{
    int a,no,b,temp=0;
    cout<<"Enter any positive number : ";
    cin>>no;
    b=no;
    while(no>0)
    {
        a=no%10;
        no=no/10;
        temp=temp*10+a;
    }
    if(temp==b)
    {
        cout<<"Palindrome\n";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}