#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,coun=0;

    cin>>a>>b>>c>>d;

    if(a == b || a == c || a == d)

        coun++;

    if(b == c || b == d)

        coun++;

    if(c==d)

       coun++;

    cout<<coun;

    return 0;
}
