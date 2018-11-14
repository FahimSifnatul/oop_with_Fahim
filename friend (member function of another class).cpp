/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

/*N.B.:you have to follow the below sequence when you will make this type of friendship*/

class sobai_amr_jinis_kere_nei
{
  public:
      int dosh_gun();
};

class rakkhos
{
   int n1,n2;//these variables are also private.
   friend int sobai_amr_jinis_kere_nei::dosh_gun();
}n;

int sobai_amr_jinis_kere_nei::dosh_gun()
{
  cout<<"dosh number = ";
  cin>>n.n1;
  cout<<"gun number = ";
  cin>>n.n2;
  return n.n1*n.n2;
}

int main()
{
 sobai_amr_jinis_kere_nei   moja_dekho;//sobai_amr_jinis_kere_nei ei class er object declare korte hobe jehetu friend function ta ei class er tai.
 cout<<"dosh_gun number = "<<moja_dekho.dosh_gun();
 return 0;
}






