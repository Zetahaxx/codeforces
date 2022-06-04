#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[N];
int k;

int fun(int i,vector<int>&h)
{
    if(i==0) return 0;
    int cost=INT_MAX;
    if(dp[i]!=-1) return dp[i];//memoise
    for(int j=1;j<=k;++j){
    if(i-j>=0)
    cost=min(cost,fun(i-j,h)+abs(h[i]-h[i-j]));}
    return dp[i]=cost;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>k;
    vector<int>h(n,0);
    for(int i=0;i<n;++i)
    {
        cin>>h[i];
    }
    cout<<fun(n-1,h);

}