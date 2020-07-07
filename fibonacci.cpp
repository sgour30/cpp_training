#include <iostream>
using namespace std;
int main()
{
 int i,n,s;
 int n1=0;
 int n2=1;
 cin>>n;
 for(i=1;i<=n;++i)
 {
      s=n1+n2;
      cout<<s;
      n1=n2;
      n2=s;

 }	 
 return 0;
}