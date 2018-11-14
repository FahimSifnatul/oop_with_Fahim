/*bismillahir rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;

class line_er_vitore_function
{
 public:
     int boro(int a,int b);
     int choto(int a,int b)
     {
         return (a<b)?a:b;//here conditional operator ?: is used.
     }
     /*here int choto(int a, int b) is the inline function. when inside a class, you will define a function with its declaration then it can be called inline function. bujis ni na???
     class er vitore jokhon tui code ta declare korar time ei tar kaj tao bole dibi tokhon take inline function bole.*/
}n;

inline int line_er_vitore_function :: boro(int a,int b)//you can make a function inline using the keyword inline in front of it.
{
    return (a>b)?a:b;
}

int main()
{
  int a,b;
  cin>>a>>b;
  cout<<"boro ="<<n.boro(a,b)<<endl;
  cout<<"choto = "<<n.choto(a,b)<<endl;
  cout<<"khusi???\n";
  return 0;
}


/*N.B. : actually inline function is not called at the calling area rather the code of the inline function expand at the point of invocation.
that means the whole code comes to the calling area. inline function decreases the runtime but increases the memory.*/








