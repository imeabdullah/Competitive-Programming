#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(q,n)     for(int i = q;i<n;i++)
#define rfo(n,q)    for(int i = n-1;i>=q;i--)
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define mod         1e9+7
#define local


int n;
void solve()
{
    cin >> n;
    int c = 0;
    fo(2,n+1) 
    {
        int x = i;
        int sc = 0;
        for(int j = 2;j*j<=i;j++) 
        {
            if(x % j == 0) 
            {
                sc++;
                while(x % j == 0) 
                {
                    x = x / j;
                }
            }
        }
        if(x>1)
            sc++;
        if(sc == 2)
            c++;
    }
    cout << c << endl;
}

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    solve();
}