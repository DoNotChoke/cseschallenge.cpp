#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve(vector<int> nums, int n)
{
    int ans=n;
    map<int,int> mp;
    for(int i=1;i<=n;i++)
    {
        mp[nums[i]]=i;
    }
    for(int i=1;i<n;i++)
    {
        if(mp[nums[i]+1] > mp[nums[i]]) ans--;
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
    vector<int> nums(n+1);
    for(int i=1;i<=n;i++) cin>> nums[i];
    cout<<solve(nums,n);
}
