#include <bits/stdc++.h>
using namespace std;
void solve(int n,vector<int> queries)
{
    set<int> lights{0,n};
    multiset<int> dist{n};
    for(int i=0;i<queries.size();i++)
    {
        auto it1=lights.upper_bound(queries[i]);
        auto it2=it1;
        it2--;
        dist.erase(dist.find(*it1-*it2));
        dist.insert(queries[i]-*it2);
        dist.insert((*it1)-queries[i]);
        lights.insert(queries[i]);
        auto ans=dist.end();
        --ans;
        cout<<*ans<<" ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<int> queries(q);
    for(int i=0;i<q;i++)cin>> queries[i];
    solve(n,queries);
}
