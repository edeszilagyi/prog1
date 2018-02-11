#include <iostream>
//valtozocsere xor-al
using namespace std;

int main()
{
 int a;
 int b;

 cout<<"a=";
 cin>>a;
 cout<<"b=";
 cin>>b;

 a=b^a;
 b=b^a;
 a=b^a;

 cout<<a<<" "<<b<<endl;
 
 a=b^a;
 b=b^a;
 a=b^a;

  
 cout<<a<<" "<<b<<endl;
 
 return 0;
}
