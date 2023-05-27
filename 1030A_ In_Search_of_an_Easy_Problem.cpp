#include<iostream>
using namespace std;

int main()
{
    int n,coun=0;
    cin>>n;

    int arra[n];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];

        if(arra[i]==1)
            coun++;
    }

    if(coun>0)
        cout<<"HARD";
    else
        cout<<"EASY";


    return 0;
}
