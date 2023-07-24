#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cin>>n;

    int arra[n];

    for(i=0;i<n;i++)
    {
        cin>>arra[i];
    }

    for(j=1;j<=n;j++)
    {
         for(i=0;i<n;i++)
         {
             if(arra[i]==j)
             {
                 cout<<i+1<<" ";
             }
         }
    }

    return 0;
}
