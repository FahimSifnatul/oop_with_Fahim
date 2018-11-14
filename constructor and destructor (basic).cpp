/*bismillahir rahmanir rahim */
#include<bits/stdc++.h>
using namespace std;

class consdest
{
    //consdest(){}
    //~consdest(){}
    //tui jodi constructor and destructor declare ba define kisu nao kore dis tao tara automatically call hobe. prottek ta class er sathe by default contstructor and destructor create kore compiler.
    //but we will create constructor and destructor from our own.
    //
public:
    consdest()//default constructor with no argument. it may have arguments. if consdest(int i=0) is declared as constructor then it will be called default constructor with default argument.
    {
        cout<<"ece er sobdi keltu. ami bade (chokh tip mara emoticon hobe).\n";
    }
    ~consdest();//default destructor. destructor will never have any argument.
};

consdest :: ~consdest()//you can write the constructor in this way also.
    {
        cout<<"oh. it is destructor. this is destroying the keltu and kelti one by one\n";
    }

int main()
{
    consdest keltu[57];//here this is an object array. 57 ta keltu and kelti. ami bad.
    return 0;
}
