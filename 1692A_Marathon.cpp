#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c,d;

    cin>>t;

    while(t--)
    {
        int coun=0;
        cin>>a>>b>>c>>d;

        if(a<b)
            coun++;
        if(a<c)
            coun++;
        if(a<d)
            coun++;

        cout<<coun<<endl;
    }

    return 0;
}
