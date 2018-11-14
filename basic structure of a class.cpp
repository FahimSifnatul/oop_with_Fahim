//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

class ordhobahuboli
{
public:
    int andhar=123;//these variables are public property just like public toilet. that means anyone can access this varible from anywhere.
private:
    int rater=456;//will you agree to share your private property with anyone?? yes, obviously your answer is no. so like private property, private variables can't be used outside of class. only class members can use that.
protected:
    int musafir=789;//protected variables are just like private variables. but these types of varibles can be inherited but private varibales can never be inherited.
//N.B.: public,private,protected are called access modifier. bujo nai bpr ta??? mane bulsi ki je public,private,protected era tumake bulbe je tumi class member gula ke kmne use korte parba?? ebr bujaso???
};

int main()
{
    ordhobahuboli arm;//declaring object
    cout<<"ami andhar = "<<arm.andhar;//compilation successful in this step.
    //arm.rater; oh.you will get an error message if you run it.haven't i told you that this is an private property???
    //arm.musafir; these variable can be inherited to your children. but it can't be used outside of the classroom....no...no..class.
    return 0;
}
