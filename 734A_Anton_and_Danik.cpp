#include<iostream>
using namespace std;

int main()
{
    int n,A=0,D=0;
    char c;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>c;

        if(c=='A')
            A++;
        if(c=='D')
            D++;
    }

    if(A>D)
        cout<<"Anton";
    else if(A<D)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}
