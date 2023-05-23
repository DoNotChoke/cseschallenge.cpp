#include <bits/stdc++.h>
using namespace std;
const int maxN=2e5+10;
bool check[maxN];
int solve(int n, int m, vector<int> nums)
{
    sort(nums.begin(),nums.end());
    int i=0;int j=n-1;
    int ans=0;
    while(i<j)
    {
        if(nums[i]+nums[j]> m) j--;
        else
        {
            ans++;
            check[i]=check[j]=true;
            i++;
            j--;
        }
    }
    for(int k=0;k<n;k++)
    {
        if(!check[k])
            ans++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>> nums[i];
    cout<<solve(n,m,nums);
}
