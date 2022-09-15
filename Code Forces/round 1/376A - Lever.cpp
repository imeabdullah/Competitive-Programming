#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define all(v)      v.begin(),v.end()
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
    string s;
    cin >> s;
    ll u = 0,  m;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='^')
        {
            m = i;
            break;
        }
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='^' || s[i]=='=') continue;
        u += (s[i]-'0')*(m-i);
    }
    if(u==0) cout << "balance" <<endl;
    if(u>0) cout << "left" <<endl;
    if(u<0) cout << "right" <<endl;
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