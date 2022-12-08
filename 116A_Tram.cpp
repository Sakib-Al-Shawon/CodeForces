#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c=0,m=0;
    cin>>n;

    while(n!=0)
    {
       cin>>a>>b;
       c=c-a;
       c=c+b;
       if(c>m)
       {
           m=c;
       }

       n--;
    }

    cout<<m;

    return 0;
}
