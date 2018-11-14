/*bismillahir rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;

class boltu_chora
{
 int a=2475;//amr khub priyo ekta number. amr je kono password e ei number ta thake usually ;) .
public:
  int b=2;
protected:
  int c=3;
};

class boltu_chorar_chamcha /*derived class*/ : public /*access specifier. eita dara amra bujassi je base class er member gula ki type hoye derived class e inherit hobe*/ boltu_chora/*base class*/
{
    int d=4;
public:
    int e=5;
    int boltu_chorar_promember_inherit_check()
    {
        return c;
    }
protected:
    int f=6;
}n;

int main()
{
 //ami niche comment akare jegula likhbo oigula code hisebe likhle compilation error dekhabe.
 //cout<<"private = "<<n.a<<endl; (eita code hisebe likhle error dekhabe. karon private member kokhono inherit kora jai na.
 cout<<"boltu_chora public member = "<<n.b<<endl;
 //cout<<"boltu_chora protected = "<<n.c<<endl; (eita code hisebe likhle error dekhabe. protected member inherit hoi but inherit hooar por inherited class e seta private variable er moto kaj kore.
 //cout<<"boltu_chorar_chamcha private = "<<n.d<<endl; (eita code hisebe likhle error dekhabe. karon private member kokhono baire theke access kora jai na.
 cout<<"boltu_chorar_chamcha public member = "<<n.e<<endl;
 //cout<<"boltu_chora protected = "<<n.f<<endl; (eita code hisebe likhle error dekhabe. protected member kono class er vitore private member er motoi kaj kore.
 cout<<"boltu_chora protected member = "<<n.boltu_chorar_promember_inherit_check();//derived class er protected member je inherit hoise tar proof.
 return 0;
}


/*N.B. : publicly inherit krle base class er public-public , private-x, protected-protected hisebe derived class e ase.
privately inherit korle private-x, public-private, protected-private hisebe derived class e ase.
ar protectedly inherit korle public-protected, private-x, protected-protected hisebe derived class e ase.*/










