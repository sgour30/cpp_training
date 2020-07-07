include <iostream>
using namespace std;
class Addition 
{
 public:
 int add(int n1,int n2) 
 {
 return n1+n2;
 }

 int add(int n1,int n2,int n3) 
 {
  return n1+n2;
 }
};
int main(void) 
{
Addition a;
cout<<a.add(20, 15)<<endl;
cout<<a.add(81, 162,21);
return 0;
}