#include<bits/stdc++.h>
using namespace std;

class DS {
    private:
    vector<int> parent, rank, size;

    public:
    DS(int n) {
        // assigning to 0th index
        parent.push_back(-1);
        size.push_back(-1);
        rank.push_back(-1);

        // from 1 to nth index
        for(int i = 1;i<=n;i++) {
            parent.push_back(i);
            size.push_back(1);
            rank.push_back(0);
        }
    }

    int findPar(int node) {
        if(parent[node] == node) {
            return node;
        }
        return parent[node] = findPar(node);
    }

    void unionByRank(int node1,int node2) {
        int par1 = findPar(node1);
        int par2 = findPar(node2);

        if(par1 == par2) {
            return;
        }

        if(rank[par1] == rank[par2]) {
            parent[par2] = parent[par1];
            rank[par1]++;
        } else if(rank[par1] > rank[par2]) {
            parent[par2] = parent[par1];
        } else {
            parent[par1] = parent[par2];
        }
    }

    void unionBySize(int u, int v) {
        u = findPar(u);
        v = findPar(v);

        if(u == v) return;

        if(size[u] > size[v]) {
            parent[v] = parent[u];
            size[u] += size[v];
        } else {
            parent[u] = parent[v];
            size[v] += size[u];
        }
    }
};