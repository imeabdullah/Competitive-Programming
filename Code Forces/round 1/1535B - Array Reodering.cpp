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

void solve() {
    int n;
        cin>>n;
 
        int a[n];
        
        vector<int> odd;
        vector<int> even;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
 
            if(x%2==0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
 
        int o = odd.size();
        int e = n - o;
 
        long long int ans = e * o;//even*odd
 
        for (int i = 0; i < o; i++)
        {
            for (int j = i+1; j < o; j++)
            {
                if((__gcd(odd[i], 2*odd[j]))>1)
                    ans++;
            }
            
        }//odd
 
        ans += (e * (e - 1) / 2);;//even
 
        cout<<ans<<"\n";
}

int main() 
{
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    test(t) {
        solve();
    }
}