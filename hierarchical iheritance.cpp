/*bismillahir rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;

class mama
{
 int dokan=1;//mamar private wealth.
 public:
     int chocholate=10;//vagneder jonno public rakhsen mama.
 protected:
     int cash=10000;//onno kisu jai thak magar cash ta kintu thik protected rakhse mama. obosso ei taka ta vagne der jonnoi.. haha emoticon.
};

class vagne1 : private mama//ei vagna ki rokom dekhso??? mama er sob kisu privately inherit kortese jate or pore ar keu inherit krte na pare. ki selfish re baba.....
{
 //do your code here
 public:
     void inherited_by_vagne1()
     {
         cout<<"chocholate = "<<chocholate<<"\ncash = "<<cash<<endl;
     }
}v1;

class vagne2 : protected mama//ei vagne valo ase ager tar theke. mama er wealth protected hisebe inherit kortese jate pore keu ei vagner maddhome mama ke inherit korte pare.
{
 //do your code here
  public:
     void inherited_by_vagne2()
     {
         cout<<"chocholate = "<<chocholate<<"\ncash = "<<cash<<endl;
     }
}v2;

int main()
{
 //cout<<"mama er public property for vagne1 = "<<v1.chocholate<<endl; run hobe na karon chocholate vagner private property inherit hoar por.
// cout<<"mama er public property for vagne2 = "<<v2.chocholate<<endl; run hobe na karon chocholate vagne 2 er  protected property inherit hoar por.
 v1.inherited_by_vagne1();
 v2.inherited_by_vagne2();
 /*here, carefully notice one thing. no private property from base class is inherited to derived class. i think by this time u already know the reason.*/
 return 0;
}
