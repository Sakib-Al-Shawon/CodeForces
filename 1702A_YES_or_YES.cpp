#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;
        if(s=="Yes" || s=="yEs" || s=="yeS" || s=="YEs" ||  s=="YeS" ||  s=="yES" ||  s=="YES" ||  s=="yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
