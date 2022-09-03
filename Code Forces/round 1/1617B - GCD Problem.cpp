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
    cin >> n;

    if(n % 2 == 0) {
        cout<<"2 "<<(n-1)-2<<" 1\n";
    } else {
		int cur=(n-1)/2;
		if (cur%2==0) cout<<cur-1<<" "<<cur+1<<" "<<1<<endl;
		else cout<<cur-2<<" "<<cur+2<<" "<<1<<endl;
	}
}

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    test(t) {
        solve();
    }
}