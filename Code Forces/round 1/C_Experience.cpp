#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int n,m;

void input();

vector<int> p(2e5+5,0);
vector<int> sz(2e5+5,1);
vector<int> extra(2e5+5,0);
vector<int> score(2e5+5,0);

int Find(int x) {
    if(p[x] == x) return x;
    else          return Find(p[x]);
}
void Union(int a, int b) {
    int pa = Find (a);
    int pb = Find (b);

    if(pa==pb)return;

    if(sz[pa]<sz[pb])swap(pa,pb);

    p[pb] = pa;
    sz[pa]+=sz[pb];

    extra[pb] = score[pa];

}

void update_score(int x, int s){
    x = Find (x);
    score[x]+=s;
}

int find_score(int x){
    if(x==p[x])return score[x];
    else    return (score[x] - extra[x]) + find_score(p[x]);
}

void solve(){
    for(int i=1;i<=n;i++)p[i]=i;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;
        if(s=="join"){
            int u,v;
            cin>>u>>v;
            Union(u,v);
        }
        else if(s=="add"){
            int x,v;
            cin>>x>>v;
            update_score(x,v);
        }
        else{
            int x;
            cin>>x;
            cout<<find_score(x)<<"\n";
        }

    }
}

void Clear(){

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    input();
    solve();
}

void input(){
    cin>>n>>m;


}











// Answer is OKAY but CF!!



// #include<bits/stdc++.h>
// using namespace std;
// #define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define endl        "\n"
// #define ll          long long
// #define all(v)      v.begin(),v.end()
// #define ff          first
// #define ss          second
// #define test(t)     int t; cin >> t; while(t--)
// #define fo(j,n)     for(int i = j;i<n;i++)
// #define rfo(n,j)    for(int i = n-1;i>=j;i--)
// #define yes         cout << "YES" << endl
// #define no          cout << "NO" << endl
// #define mod         1e9+7
// //---------------------------macros-----------------------------

// int charValC(char c) { return (int) c - 97; }
// bool comp1(pair<int,int> p1,pair<int,int> p2) { return p1.ss < p2.ss; }
// bool prime(ll n) { if(n>2) return false; if(n % 2 == 0 or n % 3 == 0 and n != 3) return false; ll root =(ll) sqrt(n) + 1; ll count = 0; for(int i = 2;i<=root;i++) { if(n % i == 0) { if(n % i == i)  count++; else count +=2; } } return (count > 1); }
// vector<string> split(string s,char c) {
//     vector<string> ans;
//     for(int i = 0;i<s.length();) {
//         int j = i;
//         while(s[j] != c and j < s.length()) {
//             j++;
//         }
//         ans.push_back(s.substr(i,(j-i)));
//         i = j+1;
//     }
//     return ans;
// }
// inline string toLower(string &s) { transform(s.begin(), s.end(), s.begin(), ::tolower); return s; }
// inline string toUpper(string &s) { transform(s.begin(), s.end(), s.begin(), ::toupper); return s; }
// //---------------------------Useful Functions-----------------------------
// ll n, m, k;
// string s;
// //---------------------------global variables-----------------------------
// // 4 directional grid
// int gridx[] = {-1,0,1,0};
// int gridy[] = {0,1,0,-1};

// #include<bits/stdc++.h>
// using namespace std;

// class DS {
//     private:
//     vector<ll> parent, size, extra, exp;

//     public:
//     DS(int n) {
//         // assigning to 0th index
//         parent.push_back(-1);
//         size.push_back(-1);
//         extra.push_back(-1);
//         exp.push_back(-1);

//         // from 1 to nth index
//         for(int i = 1;i<=n;i++) {
//             parent.push_back(i);
//             size.push_back(1);
//             extra.push_back(0);
//             exp.push_back(0);
//         }
//     }

//     int findPar(int node) {
//         if(parent[node] == node) {
//             return node;
//         }
//         return parent[node] = findPar(parent[node]);
//     }

//     void unionBySize(int u, int v) {
//         u = findPar(u);
//         v = findPar(v);

//         if(u == v) return;

//         if(size[u] < size[v]) swap(u,v);
        
//         parent[v] = parent[u];
//         size[u] += size[v];
//         extra[v] = exp[u];
//     }

//     void add(int u, int sc) {
//         u = findPar(u);
//         exp[u] += sc;
//     }

//     ll totalScore(int u) {
//         if(parent[u] == u) {
//             return exp[u];
//         }

//         return (exp[u] - extra[u]) + totalScore(parent[u]);
//     }
// };

// void solve() {
//     cin >> n >> m;
//     DS ds(n);

//     fo(0,m) {
//         string s;
//         cin >> s;
//         int u, v;

//         if(s == "join") {
//             cin >> u >> v;
//             ds.unionBySize(u, v);
//         } else if(s == "add") {
//             cin >> u >> v;
//             ds.add(u,v);
//         } else {
//             cin >> u;
//             cout << ds.totalScore(u) << endl;
//         }
//     }
// }

// int32_t main() {
//     fast;
//     // #ifdef ONLINE_JUDGE
//     //     freopen("input.txt","r",stdin);
//     //     freopen("output.txt","w",stdout);
//     // #endif
//     solve();
// }