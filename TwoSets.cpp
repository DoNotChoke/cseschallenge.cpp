#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll n)
{
    ll sum= n*(n+1)/2;
    if(sum %2 !=0)
    {
        cout<<"NO";
        return;
    }
    vector<ll> a,b;
    if(n%2==0)
    {
        for(int i=1;i<=n/2;i++)
        {
            if(i%2==1)
            {
                a.push_back(i);
                a.push_back(n-i+1);
            }
            else
            {
                b.push_back(i);
                b.push_back(n-i+1);
            }
        }
    }
    else
    {

        for(int i=1;i<=(n-1)/2;i++)
        {
            if(i%2==1)
            {
                a.push_back(i);
                a.push_back(n-i);
            }
            else
            {
                b.push_back(i);
                b.push_back(n-i);
            }
        }
        b.push_back(n);
    }
    cout<<"YES"<<"\n";
    cout<<a.size()<<"\n";
    for(ll i:a) cout<<i<<" ";
    cout<<"\n";
    cout<<b.size()<<"\n";
    for(ll i:b) cout<<i<<" ";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    solve(n);

}
