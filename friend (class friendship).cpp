/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

/*N.B. : there are two ways to make class friendship. i will write codes using FORWARD DECLARATION/REFERENCING.*/

class gutibaji;//forward declaration / referencing.

class math
{
    int aynabaji1, aynabaji2;
    friend gutibaji;
}bujsso;

class gutibaji
{
public:
    int gutibaji_add();
    int guitbaji_display();
};

int gutibaji :: gutibaji_add()
{
    cout<<"gutibaj number1 = ";
    cin>>bujsso.aynabaji1;
    cout<<"gutibaj number2 = ";
    cin>>bujsso.aynabaji2;
    return bujsso.aynabaji1-bujsso.aynabaji2;
}

int gutibaji :: guitbaji_display()
{
 cout<<"\ngutibaji ta bujte parla??? bujo nai bpr ta???\nadd function name diye biyog koresi re bhuta ;) .......\n";
}

int main()
{
 gutibaji a;
 cout<<"gubaji result = "<<a.gutibaji_add();
 a.guitbaji_display();
 return 0;
}

















