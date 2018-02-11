#include <iostream>
//valtozocsere osztas szorzassal
using namespace std;

int main()
{
 float a;
 float b;

 cout<<"a=";
 cin>>a;
 cout<<"b=";
 cin>>b;

 a=b/a;
 b=b/a;
 a=b*a;

 cout<<a<<" "<<b<<endl;
 
 a=b/a;
 b=b/a;
 a=b*a;

  
 cout<<a<<" "<<b<<endl;
 
 return 0;
}
