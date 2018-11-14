/*bismillahir rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;

class consdest
{
    int goal;
public:
    consdest(int a=0);
    /*eikhane a=0 ekta default value diye dissi. karon jodi kono object create kora hoi jar sathe kono value pass kora hosse na tokhon sei object er value hobe 0.*/
    ~consdest()
    {
        cout<<"goal khaise to ki hoise??? ei dekh goal dise = "<<goal<<endl;
    }
};

consdest :: consdest(int a)
{
 goal=a;
 cout<<"ece goalkeeper goal khaise = "<<goal<<endl;
}

int main()
{
   consdest eee_goal(3),cse_dise(2),ete_dise(1),own_goal;//ki dise?? goal dise.
   return 0;
}


/*N.B. : je object age create hobe tar constructor sobar ses e destroy hobe.*/










