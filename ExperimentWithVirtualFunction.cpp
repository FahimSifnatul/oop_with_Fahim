#include<iostream>
using namespace std;
class A{
    public:
        virtual void operation(){
            cout<<"A"<<endl;}
};
class B: public A{
    public:
        void operation(){
            cout<<"B"<<endl;}
};
class C: public B{
    public:
        void operation(){
            cout<<"C"<<endl;}
        void call(){
            cout<<"Nothing";
        }
};

int main(){
    A a;
    A *point=new C;
    B b;
    C c;
   // a.operation();
   // b.operation();
  //  c.operation();

    point=&b;
    point=new C;
    //*point=b;
      point->operation();

    //point=&c;
    //point->call();
   //point->operation(5,2);
    //point->operation(2,5);
   // point=&b;
   // point->operation(5,2);
    }
