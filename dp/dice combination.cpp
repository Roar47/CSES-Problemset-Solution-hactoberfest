#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
#define PI 3.141592653589

typedef long long ll;
const long long INF=1e18;
const long long mINF=(-1)*INF;
const long long N=2e5+4;

using namespace std;

ll power(ll a, ll b) 
{   ll result=1;
    while(b)
    {   if(b%2) result=(result*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int i,j, n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
        
    }
    cout<<dp[n];
    return 0;
}
