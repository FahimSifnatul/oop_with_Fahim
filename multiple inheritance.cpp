/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
/*in this episode we will learn about multiple inheritance. and we will also see the sequence of constructor calling of the classes.*/


class ma
{
    int weight2=62;
public:
    int character2 = 2;
    ma()
    {
        cout<<"birth of ma.\n";
    }
    ~ma()
    {
        cout<<"death of ma.\n";
    }
protected:
    int gene2=20;
};

class bap
{
    int weight1=75;
public:
    int character1 = 1;
    bap()
    {
        cout<<"birth of bap.\n";
    }
    ~bap()
    {
        cout<<"death of bap.\n";
    }
protected:
    int gene1=26;
};

class me : protected bap,protected ma
{
 //do your code here
 public:
     void bap_ma_er_kase_theke_ki_ki_pailam_dekhi()
     {
         cout<<"bap er kase theke -->> character = "<<character1<<" gene = "<<gene1<<endl;
         cout<<"ma er kase theke -->> character = "<<character2<<" gene = "<<gene2<<endl;
         //weight ta pailam na karo kase thekei dhuru......
     }
     me()
    {
        cout<<"birth of me.\n";
    }
    ~me()
    {
        cout<<"death of me.\n";
    }
};


int main()
{
 me n;
 n.bap_ma_er_kase_theke_ki_ki_pailam_dekhi();
 return 0;
}


/*jake first e inherit kora hobe tar constructor ta sober age calll hobe. ei code e dekh je bap ke sobar age inherit kora hoise tarpor ma ke. tai soba age bap tarpor ma tarpor me er constructor call hoise.
protected bap,protected ma eirokom na likhe jodi eirokom likhti protected ma,protected bap tahole ma,bap,me ei sequence e constructor call hoto.*/











