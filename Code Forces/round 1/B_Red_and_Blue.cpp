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

// 4 directional grid
int gridx[] = {-1,0,1,0};
int gridy[] = {0,1,0,-1};

void solve() {
    int n,mxa = 0;
	int cnt = 0;
	cin >> n;
	std::vector<int> a(n);
	for(int i = 0;i < n;i++)
		cin >> a[i];

	for(int i = 0;i < n;i++) {
		cnt += a[i];
		mxa = max(mxa, cnt);
	}
	int m,mxb = 0;
	cnt =0;
	cin >> m;
	std::vector<int> b(m);
	for(int i = 0;i < m;i++)
		cin >> b[i];
	for(int i = 0;i < m;i++) {
		cnt += b[i];
		mxb = max(mxb,cnt);
	}
	int k = mxa + mxb;
	int f = 0;
	int ans = max(f,k);
	cout << ans << endl;  
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