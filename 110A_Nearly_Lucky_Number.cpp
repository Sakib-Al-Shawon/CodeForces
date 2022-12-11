#include<iostream>
using namespace std;

int main()
{
    long long n,r,coun=0;
    cin>>n;

    while(n!=0)
    {
        r=n%10;
        if(r==4 || r==7)
        {
            coun++;
        }
        n=n/10;
    }

    if(coun==4 || coun==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
