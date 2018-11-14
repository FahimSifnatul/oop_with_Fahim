/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
/*now we will learn about hybrid inheritance. two terms related with this type of inheritance is virtual keyword and ambiguity.*/
/*hybrid inheritance : at first, one base class then to sub class inheriting base class and at the last derived class inheriting the two sub classes.*/
/*definition of ambiguity :  The ambiguity simply means the state when the compiler confused.*/
/*definition of virtual class : This means that a child class could have duplicate sets of members inherited from a single base class.*/
class base
{
 public:
     int ambiguious=2475;
     base()
     {
         cout<<"base constructor\n";
     }
};

class sub1 :virtual public base
{
 public:
     int s1;
     sub1()
     {
         cout<<"sub1 constructor\n";
     }
};

class sub2 :virtual public base
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
          cout<<"derived constructor\n";//assa eto eto constructor. keu tender dakis na kno re???
      }
}c;

int main()
{
 cout<<"base class variable = "<<c.ambiguious<<endl;
 /*virtual keyword use na korle base class er variable print krr somoy error dekhabe. compiler tor kase jante chaibe je eita kon class er theke inherit hoa variable. ar ha arekta darun jinis
 .......tui jodi virtual keyword use na koris tahole base class constructor er 2 ta copy print hobe.*/
 return 0;
}










