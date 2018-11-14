/*bismillahir rahmanir rahim*/
#include<bits/stdc++.h>
using namespace std;

class grandpa
{
  private:
      string name1="md. miraj molla";
  public:
      string bari1 = "fatema villa";
      grandpa()
      {
       cout<<"ei grandpa class er e member ---\n";
       cout<<"name1 = "<<name1<<"\nbari1 = "<<bari1<<"\nwealth1 = "<<wealth1<<endl;
       cout<<"\n\n\n";
      }
  protected:
      int wealth1=1000000;
};

class father : protected grandpa
{
    private:
      string name2="md. miraj molla2";
  public:
      string bari2 = "fatema villa2";
      father()
      {
          cout<<"For father class, the inherited members are-----\n";
          cout<<"grandpa class theke inherited members --->> bari1 = "<<bari1<<"\nwealth1 = "<<wealth1<<endl;
          cout<<"ei class er e (father class) --->> name2 = "<<name2<<"\nbari2 = "<<bari2<<endl;
          cout<<"\n\n\n";
      }
  protected:
      int wealth2=2*1000000;
};

class me : public father
{
  private:
      string name3="miraj junior";
  protected:
      int wealth3=0;//jehetu ami bekar.
  public:
     me()
    {
        cout<<"For me class, the inherited members are-----\n";
        cout<<"grandpa class theke inherited members --->> bari1 = "<<bari1<<"\nwealth1 = "<<wealth1<<endl;//grandpa class theke me class e eigula protected member hisebe inherit hobe. kno seita tomrai ektu vebe ber koro kmn??? na parle ager inheritance gula bujar try koror.
        cout<<"father class theke inherited members --->> bari1(public) = "<<bari2<<"\nwealth2(protected) = "<<wealth2<<endl;
        cout<<"ei class theke neoa members :D --->> bari1 = "<<bari1<<"\nwealth1 = "<<wealth1<<endl;
    }
}c;

int main()
{
 return 0;
}
