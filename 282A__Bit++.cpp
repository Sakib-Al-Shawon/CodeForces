#include<iostream>
using namespace std;

int main()
{
    int n,coun=0;
    string X;
    cin>>n;

    while(n!=0)
    {
        cin>>X;
        if(X[1]=='+')
        {
            coun++;
        }
        else
        {
            coun--;
        }
        n--;
    }

    cout<<coun;

    return 0;
}
