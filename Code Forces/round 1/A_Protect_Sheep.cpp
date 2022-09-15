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
int gridx[] = {-1,0,1,0};
int gridy[] = {0,1,0,-1};

void solve() {
    int n, m;
    cin >> n >> m;
    string s[n];
    for(int i = 0;i<n;i++) cin >> s[i];

    for(int i = 0;i<n;i++) {
        for(int j = 0;j<s[i].length();j++) {
            if(s[i][j] == 'W') {
                for(int k = 0;k<4;k++) {
                    int curx = i + gridx[k];
                    int cury = j + gridy[k];

                    if(curx >= n or curx < 0 or cury >=m or cury < 0) {
                        continue;
                    }
                    if(s[curx][cury] == 'S') {
                        cout << "No" << endl;
                        return;
                    } 
                    else if(s[curx][cury] == '.') {
                        s[curx][cury] = 'D';
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    for(int i = 0;i<n;i++) cout << s[i] << endl;
}

int main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
}