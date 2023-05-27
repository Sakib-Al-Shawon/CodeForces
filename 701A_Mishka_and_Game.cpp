#include<iostream>
using namespace std;

int main()
{
    int n,m,c,M=0,C=0;

    cin>>n;

    while(n--)
    {
        cin>>m>>c;

        if(m>c)
            M++;
        if(m<c)
            C++;
    }

    if(M>C)
        cout<<"Mishka";
    else if(M<C)
        cout<<"Chris";
    else if(M==C)
        cout<<"Friendship is magic!^^";
    else
        cout<<"Friendship is magic!^^";

    return 0;
}
