#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(j,n)     for(int i = j;i<n;i++)
#define rfo(n,j)    for(int i = n-1;i>=j;i--)
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define mod         1e9+7
#define local

int n;

void solve() 
{
    int d;
    cin >> n >> d;
    vector<int> vec(n);
    fo(0,n)
    {
        cin >> vec[i];
    }
    int move = 0;
    fo(1,n)
    {
        if(vec[i-1] >= vec[i])
        {
            int x = ((vec[i-1] - vec[i]) / d) + 1;
            move += x;
            vec[i] += x * d;
        }
    }
    // fo(0,n)
    //     cout << vec[i] << " ";
    // cout << endl;
    cout << move << endl;
}

int main() 
{
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    solve();
}