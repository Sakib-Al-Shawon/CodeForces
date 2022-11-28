#include<iostream>
using namespace std;

int main()
{
    int n,k,i,arra[50],coun=0;
    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>arra[i];
    }

    for(i=0;i<n;i++)
    {
        if(arra[i]>=arra[k-1] && arra[i]>0)

            coun++;
    }

    cout<<coun;

    return 0;
}
