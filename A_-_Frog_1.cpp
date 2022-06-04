#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];

int fun(int i,vector<int>&h)
{
    if(i==0) return 0;
    int cost=INT_MAX;
    if(dp[i]!=-1) return dp[i];//memoise
    cost=min(cost,fun(i-1,h)+abs(h[i]-h[i-1]));//way1
    if(i>1)
    cost=min(cost,fun(i-2,h)+abs(h[i]-h[i-2]));//way2
    return dp[i]=cost;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector<int>h(n,0);
    for(int i=0;i<n;++i)
    {
        cin>>h[i];
    }
    cout<<fun(n-1,h);

}