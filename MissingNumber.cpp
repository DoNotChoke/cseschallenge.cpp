#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll n, vector<ll> nums)
{
    ll sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=nums[i];
    }
    ll a= (1+n)*n/2;
    return a-sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> nums(n-1);
    for(int i=0;i<n-1;i++) cin>> nums[i];
    cout<<solve(n,nums);
}
