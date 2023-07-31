#include<iostream>
using namespace std;

int main()
{
    int n,maxi=0,arr[100],S=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(maxi<arr[i])
            maxi=arr[i];

        if(arr[i]<maxi)
        {
            S=S+(maxi-arr[i]);
        }
    }

   /* for(int i=0;i<n;i++)
    {
        if(arr[i]<maxi)
        {
            S=S+(maxi-arr[i]);
        }
    }  */

    cout<<S;

    return 0;
}
