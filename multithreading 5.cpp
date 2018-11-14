/*bismillahir rahmanir rahim*/
#include<cstdio>
#include<thread>
#include<iostream>
#include<mutex>
using namespace std;
mutex lock1,lock2;
int task1()
{
     cout<<"my love\n";
    for(int i=1;i<=4;i++)
    {
     lock2.lock();
     cout<<"keltu"<<endl;
    }
}

int task2()
{
    for(int i=1;i<=4;i++)
    {
     lock2.lock();
     cout<<"feltu"<<endl;

    }
}

int main()
{
 thread t1(task1),t2(task2);
 t1.join();
 t2.join();
 return 0;
}

