#include <bits/stdc++.h>
#define ll long long
using namespace std;
int k=0;
int board[8][8];
char c[8][8];
bool Possible(int x, int y)
{
    if(c[x][y]=='*') return false;
    for(int l=0;l<x;l++)
    {
        if(board[l][y]==1) return false;
    }
    int i=x;
    int j=y;
    while(i>=0 and j >=0)
    {
        if(board[i][j]==1) return false;
        i--;j--;
    }
    i=x;j=y;
    while(i>=0 and j<8)
    {
        if(board[i][j]==1) return false;
        i--;
        j++;
    }
    return true;
}
void solve(int i)
{
    if(i==8)
    {
        k++;
        return;
    }
    for(int j=0;j<8;j++)
    {
        if(Possible(i,j))
        {
            board[i][j]=1;
            solve(i+1);
        }
        board[i][j]=0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            board[i][j]=0;
            cin>>c[i][j];
        }
    }
    solve(0);
    cout<<k;



}
