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


int n;

void solve() {
    cin >> n;
    string s;
    cin >> s;
    string sx;
    for(int i=0;i<s.length();) {
        int x = s[i] - 48; // to get char to numeric
        if(i+1 < s.length()) {
            x*=10;
            x = x + (s[i+1] - 48);
        }
        if(x <= 26 and s[i+2] == '0' and x > 9 and s[i+3] != '0') {
            sx += 96 + x;
            i +=3;
        }
        //else if(x <= 26 and s[i+2] == '0' and x > 9) {

        //} 
        else {
            sx += 96 + (s[i] - 48);
            i += 1;
        }
    }
    cout << sx << endl;
}

int main() {
    fast;
    #ifdef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    test(t) {
        solve();
    }
}