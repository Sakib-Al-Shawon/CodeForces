#include<iostream>
using namespace std;

int main()
{
    int n,i,coun=0;
    cin>>n;

    int arra[n];

    for(i=0;i<n;i++)
    {
        cin>>arra[i];
    }

    for(i=0;i<n;i++)
    {
        if(arra[i] != arra[i+1])
        {
            coun++;
        }
    }

    cout<<coun;
}
