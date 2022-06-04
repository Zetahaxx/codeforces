#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;++i)
        {
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        vector<int>v1;
       for(int i=0;i<n;++i)
        {
             int x=v.back();
            int p=v1.size()/2;
            if(v1.size()%2==0)
            {
                v1[p]=x;
            }
            else v1[p+1]=x;
            v.erase(v.end()-1);
           
        }
        vector<int>v2;
        for(int i=0;i<n;++i)
        {
            int p=v1.size()/2;
             if(v1.size()%2==0)
            {
                v2.push_back(v1[p]);
            }
            else v2.push_back(v1[p+1]);

        }
        int flag=0;
      for(int i=0;i<n-1;++i)
      {
          if(v[i]<=v[i+1])
          continue;
          else
          flag=1;
      }
      if(flag==1) cout<<"No\n";
      else cout<<"YES\n";
    }
}