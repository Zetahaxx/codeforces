#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int dp[N];
int fib(int n)
{
    //top down approach
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cout<<"Input nth fib:";
    cin>>n;
    /*bottom up approach
    int dp[n];
    dp[0]=0;
    d[1]=1;
    for(int i=2;i<=n;++i)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    */
    cout<<"ans:"<<fib(n);
}