/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

class base
{
public:
    base(int a)
    {
        cout<<"i am base class\n";
    }
    int add(int a,int b)
    {
        return a+b;
    }
    base(){};
    void display()
    {
        cout<<"base class\n";
    }
};

class derived : public base
{
public:
    derived(int a,int b): base(a)
    {
        cout<<"i am derived\n";
    }
    void display()
    {
        cout<<"derived class\n";
    }
};


int main()
{
    derived sorry(10,20);
    base *s,keltu;
    s=&sorry;
    s->display();
    s=&keltu;
    s->display();
    return 0;
}
