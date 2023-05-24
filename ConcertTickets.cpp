#include <bits/stdc++.h>
using namespace std;
bool check(pair<int,int> a , pair<int,int> b)
{
    return a.second< b.second;
}
int solve(vector<pair<int,int>> p)
{
    sort(p.begin(),p.end(),check);
    int end_time=p[0].second;
    int ans=1;
    for(auto a:p)
    {
        if(a.first >= end_time)
        {
            ans++;
            end_time=a.second;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<pair<int,int>> p(n);
    int a, b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p[i]= make_pair(a,b);
    }
    cout<<solve(p);
}
