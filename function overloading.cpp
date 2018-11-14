/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;
void mojnu(int x,int y)
{
    cout<<x+y<<endl;
}

void mojnu(float x,int y)
{
    cout<<x-y<<endl;
}

float mojnu(int x,double y)
{
    cout<<x/y<<endl;
}

int mojnu(int x,int y,int z)
{
    cout<<x*y*z;
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    mojnu(x,y);
    float m=x;
    mojnu(m,y);
    double n=y;
    mojnu(x,n);
    mojnu(x,y,z);
    /*dekhsos kottogula mojnu.....sobar name ek holeo dekh kaj kintu different. ek mojnu dui hate koto kam kore dekhsis??? kmne kore eitai to toder question tai to??? eitai holo oop er
    onno tomo ekta feature polymorphism. poly mane many ar morph mane form mane many form. bohurupita jare bole ar ki. c++ jehetu object oriented programming language
    tai c++ e function overloading (polymorphism) possible but c te possible na.*/
    return 0;
}
