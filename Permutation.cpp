#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(int n)
{
    if(n==1) {
        cout<<1;
        return;
    }
    if(n==2 or n==3)
    {
        cout<<"NO SOLUTION";
        return;
    }
    if(n%2==0)
    {
        for(int i=2;i<=n;i+=2)
            cout<<i<<" ";
        for(int i=1;i<n;i+=2)
            cout<<i<<" ";
    }
    else
    {
        for(int i=1;i<=n;i+=2)
            cout<<i<<" ";
        for(int i=2;i<n;i+=2)
            cout<<i<<" ";
    }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin>>n;
    solve(n);
}
