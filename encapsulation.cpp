/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>//you can use this header file frequently in your xm script. it is permitted by sir.
using namespace std;

class keltu
{
private:
    int a;
};
/*here the varible 'a' is private member of class keltu. it can't
be used outside of the class. it is called encapsulation.
here, notice that, data is also being hidden from outside and you can also tell it as data-hiding technique.*/
int main()
{
 keltu n;
 cout<<n.a<<endl;
 //if you do this then obviously you are going to get an compilation error msg.
 return 0;
}
