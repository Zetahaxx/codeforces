
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        int a=0,b=0;
        cin>>x>>y;
        if(y%x==0)
        {
            a=1;
            b=y/x;
        }
        cout<<a<<" "<<b<<"\n";
    }
}