#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve( string s)
{
    int cnt=1;
    int ans=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
            cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 1;
        }
    }
    ans= max(ans,cnt);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s;
    cin>>s;
    cout<<solve(s);
}
