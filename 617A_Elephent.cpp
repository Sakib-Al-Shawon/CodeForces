#include<iostream>
using namespace std;

int main()
{
    int k,r;
    cin>>k;

    r=k/5;

    if(k%5==0)
        cout<<r;
    else
        cout<<r+1;

    return 0;
}
