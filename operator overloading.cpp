#include<bits/stdc++.h>
using namespace std;
/*in this single code we are going to learn both uniray and binary operator overloading.
unary operators are ++,-- and binary operators are +,-,/,* etc. but .,::,.*,?: these four operators can never be overloaded.*/

class overloading
{
    int game,over;
 public:
     overloading(){game=0;over=0;/*cout<<"muio constructor\n";*/}
     overloading(int a,int b)
     {
      game=a; over=b;
      //cout<<"mui constructor\n";
     }
     /*here you see, i have already done a overloading..no no no.it is not operator overloading yet. look up, i have used to constructor but with different
     number of arguments. so what happened?? yes it is constructor overloading. constructor can be overloade but destructor never be overloaded.*/
//three types of binary operator overloading --- 1.object+object , 2.object+value, 3.value+object. here in stead of + operator u can use others binary operator also.*/
    overloading operator+(const overloading& o);//case : obj+obj
    overloading operator+(int x);//obj+value
    friend overloading operator*(int x,const overloading& o);//value+obj
    overloading operator++();//prefix
    overloading operator++(int unused);//postfix
    void display()
    {
     cout<<"game = "<<game<<" over = "<<over<<endl;
    }
};

overloading overloading :: operator+(const overloading& o)
{
 overloading temp;
 temp.game=game+o.game;
 temp.over=over+o.over;
 return temp;
}
overloading overloading :: operator+(int x)
{
 overloading temp;
 temp.game=game+x;
 temp.over=x+over;
 return temp;
}
overloading operator*(int x,const overloading& o)
{
 overloading temp;
 temp.game=x*o.game;
 temp.over=x*o.over;
 return temp;
}

overloading overloading :: operator++()
{
 ++(this->game);//u may use this or not....as ur wish.
 over++;
 return *this;
}

overloading overloading :: operator++(int unused)
{
 overloading temp;
 ++game;
 over++;
 return *this;
}

int main()
{
 overloading mostofa_game(20,5),fifa17(100,10),dxball(6,2),t;
 t=mostofa_game+fifa17;
 t.display();
 t=dxball+5;
 t.display();
 t=2*fifa17;
 t.display();
 t=mostofa_game+fifa17+dxball;
 t.display();
 ++dxball;
 dxball.display();
 dxball++;
 dxball.display();
 return 0;
}
