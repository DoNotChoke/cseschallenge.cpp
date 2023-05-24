#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll nums[], int n)
{
    ll max1=(ll)INT_MIN;
    ll max2=0;
    for(int i=0;i<n;i++)
    {
        max2+= nums[i];
        if(max1<max2)
            max1=max2;
        if(max2<0) max2=0;
    }
    return max1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin>>n;
    ll nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<solve(nums,n);

}
