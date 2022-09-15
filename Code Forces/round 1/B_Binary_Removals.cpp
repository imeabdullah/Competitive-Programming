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
    string s;
    cin >> s;
    bool flag = 0;
    if (is_sorted(s.begin(), s.end()))
    {
        cout << "YES" << endl;
    }
    else
    {
        int y = 0;
        for (int i = s.length() - 1; i > 0; i--) {
            if (s[i] == '0' && s[i - 1] == '0') {
                y = i - 1;
                flag = 1;
                break;
            }
        }
        
        if (flag == 0) {
            cout << "YES" << endl;
            return;
        }
        int flag2 = 0;
        for (int i = y; i > 0; i--) {
            if (s[i] == '1' && s[i - 1] == '1') {
                flag2 = 1;
                break;
            }
        }
        if (flag2 == 0) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
}

int main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    test(t) {
        solve();
    }
}