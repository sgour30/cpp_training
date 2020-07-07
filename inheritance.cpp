#include <iostream>
using namespace std;
class Mentor 
{
public:
  Mentor()
  {
    cout<<"Hey Guys, I am a Mentor"<<endl;
  }
  string companyName = "Msys";
};

class CMentor: public Mentor {
public:
  CMentor(){
    cout<<"I am a C Mentor"<<endl;
  }
  string mainSub = "C";
  string name = "Sam";
};
int main() {
  CMentor obj;
  cout<<"Name: "<<obj.name<<endl;
  cout<<"Company Name: "<<obj.companyName<<endl;
  cout<<"Main Subject: "<<obj.mainSub<<endl;
  return 0;
}
