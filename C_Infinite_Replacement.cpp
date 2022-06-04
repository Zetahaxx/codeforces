#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string x;
        cin>>x;
        int temp=count(x.begin(),x.end(),'a');
        if(x=="a")
        cout<<1<<"\n";
        else if(temp)
        cout<<-1<<"\n";
        else
        cout<<pow(2,x.length())<<"\n";

    }
}