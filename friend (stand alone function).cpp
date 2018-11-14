/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
/*now we will learn how to make a friendship with a friend. don't u know really??? no!!!! then go to ur room and solve laplace problems. */

class bondhutto_chiro_jiboner
{
  private:
      char bondhutto;//this varible can't be accessed from outside as i told before.
  friend int making_friendship();//here, notice carefully, this function is not the class member. but we want to use the private variable of this class. for this reason, we make the function frend of this class so that it can access the private variables of the class.
}buddies;

int making_friendship()
{
    cout<<"tumi ki amr bondhu hobe?? (y/n)\n";
    cin>>buddies.bondhutto;
    if(buddies.bondhutto=='y')
        cout<<"oi hala, 10 tk dhar de ekhuni.\n";
    else if(buddies.bondhutto=='n')
        cout<<"jao pocha tomar sathe ari.\n";
    return 0;
}

int main()
{
 making_friendship();
 return 0;
}


