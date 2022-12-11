#include<iostream>
using namespace std;

int main()
{
    int a,b,year=0;
    cin>>a>>b;

    if(a>b)
        year=0;
    else
    {
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            year++;
        }
    }
    cout<<year;

    return 0;
}
