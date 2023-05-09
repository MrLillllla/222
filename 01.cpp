#include<iostream>
using namespace std;
void test()
{
 cout<<"janlile"<<endl;
}
void test2(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i+100<<endl;
    }
}
int main()
{
    test();
    test2(4);
    return 0;
}