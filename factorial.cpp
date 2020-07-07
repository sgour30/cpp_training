#include <iostream>
using namespace std;
int fact(int n)
{
	int i;
	int j=1;
	for(i=n;i>=1;i--)
	{
		j=j*i;
		
	}
	return j;
        
}
int main()
{
	int ans, n;
	cout<<"Enter the Number: ";
	cin>>n;
	ans=fact(n);
	cout<<"Factorial is: "<<ans<<endl;
	return 0;
}