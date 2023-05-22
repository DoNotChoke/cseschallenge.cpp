#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll n)
{
    ll cnt=0;
    ll current=5;
    while(current<= n)
    {
        cnt+=n/current;
        current*=5;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    cout<<solve(n);


}
