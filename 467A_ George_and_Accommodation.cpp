#include<iostream>
using namespace std;

int main()
{
    int n,p,q,coun=0;

    cin>>n;

    while(n--)
    {
        cin>>p>>q;

        if(p+1 < q)
            coun++;
    }

    cout<<coun;

    return 0;
}
