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

int charValC(char c) { return (int) c - 97; }
bool comp1(pair<int,int> p1,pair<int,int> p2) { return p1.ss < p2.ss; }
bool prime(ll n) { if(n>2) return false; if(n % 2 == 0 or n % 3 == 0 and n != 3) return false; ll root =(ll) sqrt(n) + 1; ll count = 0; for(int i = 2;i<=root;i++) { if(n % i == 0) { if(n % i == i)  count++; else count +=2; } } return (count > 1); }
int n;

void solve() {
    int home;
    cin >> n >> home;
    vector<int> ft(n), st(n);

    fo(0,n) cin >> ft[i];
    fo(0,n) cin >> st[i];

    if(ft[0] == 0) {
        no;
        return;
    }
    if(ft[home-1] == 0) {
        bool f = 0;
        int j = -1;
        for(int i = home;i<n;i++) {
            if(ft[i] == 1 and st[i] == 1) {
                f = 1;
                j = i;
                break;
            }
        }
        if(f and f != -1 and st[home-1]) {
            yes;
        } else {
            no;
        }
    } else yes;
}

int main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
}