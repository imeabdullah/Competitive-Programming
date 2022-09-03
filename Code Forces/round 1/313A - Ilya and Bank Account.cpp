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
    cin >> n;
    if(n >= 0) cout << n << endl;
    else
    {
        if(n <=-1 and n >= -100 and n % -10 == 0) cout << 0 << endl;
        else 
        {
            string s = to_string(n);
            if(s[s.length() - 2] > s[s.length() - 1])
            {
                fo(0,s.length()) 
                {
                    if(s.length() - 2 == i) continue;
                    cout << s[i];
                }
            }
            else
            {
                fo(0,(s.length()-1))
                {
                    cout << s[i];
                }
            }
        }
    }
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