#include<iostream>
using namespace std;

int main()
{
    long double n,i,add=0,sub=0;

    cin>>n;

    for(i=1;i<=n;i+=2)
        sub=sub+i;

    for(i=2;i<=n;i+=2)
        add=add+i;

    cout<<(-sub+add);

    return 0;
}
