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
    cin >> n;
    vector<int> vec(n+1);
    fo(1,n+1) cin >> vec[i];

    vector<int> ans;
    for(int i = 1;i<(n+1);) {
        int j = i;
        int temp = vec[i];
        int count = 0;
        while(vec[j] == temp and j < (n+1)) {
            count++;
            j++;
        }
        // cout << "j:count " << j << ":" << count << endl;
        // cout <<"Count :" << count << endl;
        if(count < 2) {
            cout << -1 << endl;
            return;
        }
        if(count > 1 and count & 1) {
            ans.push_back(i+2);
            ans.push_back(i);
            ans.push_back(i+1);
            count -= 3;
            // cout <<"Count :" << count << endl;
            int k = i + 3;
            while(count > 0) {
                ans.push_back(k+1);
                ans.push_back(k);
                k += 2;
                count -= 2;
            }
        }
        if(count > 1 and !(count & 1)) {
            int k = i;
            while(count > 0) {
                ans.push_back(k+1);
                ans.push_back(k);
                k += 2;
                count -= 2;
            }
        }
        //cout << j << endl;
        i = j;
    }
    for(auto it:ans) cout << it << " ";
    cout << endl;
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