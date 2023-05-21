#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(ll n)
{
    cout<<n<<" ";
    while(n!=1)
    {
        if(n%2==0) n/=2;
        else n=n*3+1;
        cout<<n<<" ";
    }
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
