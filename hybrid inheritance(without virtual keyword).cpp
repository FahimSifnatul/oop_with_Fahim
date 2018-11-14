/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

class base
{
 public:
     int ambiguious=2475;
     base()
     {
         cout<<"base constructor\n";
     }
};

class sub1 : public base
{
 public:
     int s1;
     sub1()
     {
         cout<<"sub1 constructor\n";
     }
};

class sub2 : public base
{
 public:
     int s2;
      sub2()
      {
          cout<<"sub2 constructor\n";
      }
};

class derived : public sub1, public sub2
{
  public:
      int d;
      derived()
      {
          cout<<"derived constructor\n";
      }
}c;

int main()
{
 cout<<"base class variable = "<<c.sub1::ambiguious<<endl;
 return 0;
}










