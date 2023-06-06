#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int> a, vector<int> b)
{
    return a[0]< b[0];
}
void solve(vector<vector<int>> nums, int n)
{
    vector<int> ans(n);
    int room =0, last_room=0;
    sort(nums.begin(),nums.end(), compare);
    priority_queue<pair<int,int>> pq; // using priority queue to store the departure day and room
    for(int i=0;i<n;i++)
    {
        if(pq.empty())   // if there are no rooms that are allocated
        {
            last_room++;
            pq.push(make_pair(-nums[i][1],last_room));   // push negative departure day to create a min_heap
            ans[nums[i][2]]= last_room;
        }
        else
        {
            pair<int,int> minium=pq.top();
            if(-minium.first < nums[i][0])     // if arrivvall day is after the departure day
            {
                pq.pop();
                pq.push(make_pair(-nums[i][1],minium.second));
                ans[nums[i][2]]=minium.second;
            }
            else   // need to create a new room
            {
                last_room++;
                pq.push(make_pair(-nums[i][1],last_room));
                ans[nums[i][2]]=last_room;
            }
        }
        room=max(room,int(pq.size()));
    }
    cout<<room<<"\n";
    for(int i:ans) cout<<i<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<vector<int>> nums(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        nums[i].push_back(a);
        nums[i].push_back(b);
        nums[i].push_back(i);
    }
    solve(nums,n);
}
