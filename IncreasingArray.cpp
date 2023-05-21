#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(int n, vector<int> nums)
{
    ll ans=0;
    for(int i=1;i<n;i++)
    {
        if(nums[i]<nums[i-1]) {
            ans += nums[i - 1] - nums[i];
            nums[i] = nums[i - 1];
        }

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
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<solve(n,nums);
}
