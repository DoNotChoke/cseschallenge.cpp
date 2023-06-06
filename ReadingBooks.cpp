#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool possible(int n, vector<ll> times, ll time)
{
    for(int i=0;i<n;i++)
    {
        if((time/times[i]) < 2) return false;
    }
    return true;
}
ll solve(int n, vector<ll> time)
{
    ll sum=0;
    for(int i=0;i<n;i++) sum+= time[i];
    ll l= sum;
    ll r= sum*2;
    ll ans;
    while(l<=r)
    {
        ll mid= (l+r)/2;
        if(possible(n,time,mid))
        {
            r=mid-1;
            ans= mid;
        }
        else l=mid+1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0;i<n;i++) cin>> nums[i];
    cout<<solve(n,nums);
}
