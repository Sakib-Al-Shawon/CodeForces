#include<iostream>
using namespace std;

int main()
{
    int n,i;
    string arra[100],temp;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arra[i];
    }

    for(i=0;i<n;i++)
    {
        temp=arra[i];
        if(temp.length()>10)
        {
            cout<<temp[0]<<temp.length()-2<<temp[temp.length()-1]<<endl;
        }
        else
            cout<<temp<<endl;
    }

    return 0;
}
