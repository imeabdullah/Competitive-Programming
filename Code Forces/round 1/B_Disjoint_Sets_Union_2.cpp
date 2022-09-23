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
//---------------------------macros-----------------------------

int charValC(char c) { return (int) c - 97; }
bool comp1(pair<int,int> p1,pair<int,int> p2) { return p1.ss < p2.ss; }
bool prime(ll n) { if(n>2) return false; if(n % 2 == 0 or n % 3 == 0 and n != 3) return false; ll root =(ll) sqrt(n) + 1; ll count = 0; for(int i = 2;i<=root;i++) { if(n % i == 0) { if(n % i == i)  count++; else count +=2; } } return (count > 1); }
vector<string> split(string s,char c) {
    vector<string> ans;
    for(int i = 0;i<s.length();) {
        int j = i;
        while(s[j] != c and j < s.length()) {
            j++;
        }
        ans.push_back(s.substr(i,(j-i)));
        i = j+1;
    }
    return ans;
}
inline string toLower(string &s) { transform(s.begin(), s.end(), s.begin(), ::tolower); return s; }
inline string toUpper(string &s) { transform(s.begin(), s.end(), s.begin(), ::toupper); return s; }
//---------------------------Useful Functions-----------------------------
ll n, m, k;
string s;
//---------------------------global variables-----------------------------
// 4 directional grid
int gridx[] = {-1,0,1,0};
int gridy[] = {0,1,0,-1};
class DS {
    public:
    vector<int> parent, size, maxi, mini;

    public:
    DS(int n) {
        // assigning to 0th index
        parent.push_back(-1);
        size.push_back(-1);
        mini.push_back(-1);
        maxi.push_back(-1);
        //rank.push_back(-1);

        // from 1 to nth index
        for(int i = 1;i<=n;i++) {
            parent.push_back(i);
            size.push_back(1);
            mini.push_back(i);
            maxi.push_back(i);
            //rank.push_back(0);
        }
    }

    int findPar(int node) {
        if(parent[node] == node) {
            return node;
        }
        return parent[node] = findPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        u = findPar(u);
        v = findPar(v);

        if(u == v) return;

        if(size[v] > size[u]) swap(u, v);

        parent[v] = u;
        size[u] += size[v];

        // mini element
        mini[u] = min(mini[u],mini[v]);
        // max element
        maxi[u] = max(maxi[u],maxi[v]);
    }
};

void solve() {
    cin >> n >> m;
    DS ds(n);
    fo(0,m) {
        string s;
        int u, v;
        cin >> s;

        if(s[0] == 'u') {
            cin >> u >> v;
            ds.unionBySize(u,v);
        } else {
            cin >> u;
            int x = ds.findPar(u);
            cout << ds.mini[x] <<" " << ds.maxi[x] << " " << ds.size[x] << endl;
        }
    }
    // for(auto it:ds.currSize) {
    //     cout << it << " ";
    // }
}

int32_t main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
}