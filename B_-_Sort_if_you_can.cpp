#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>s;
        for(int i=0;i<n;++i)
        {
            int a;
            cin>>a;
            s.push_back(a);

        }
        for(int i=0;i<=m;++i)
        {
            int p;
            cin>>p;
        }
         int a1=INT_MAX;
         int count=0;
         

        for(int x:s)
        {
            if(abs(a1-x)==1) count++;
            a1=x;

        }
        int f=(count+1)/n;
        if(f==m) count=m;
        if(count==m)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}