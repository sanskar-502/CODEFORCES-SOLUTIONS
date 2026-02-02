#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)

#define ll long long
#define ld long double
#define vstr vector<string>
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()

#define len(x) int((x).size())
#define pb push_back

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

/* Result and Observations


*/

void dfs(int i, int p, int val, vector<vector<pair<int, int>>> &adj, vector<int> &ans){


    for(auto & neigh : adj[i]){
        int v= neigh.first;
        int idx= neigh.second;


        if(p != v){
            ans[idx]= val;

            dfs(v, i, 5- val, adj, ans);
        }
    }
}



void sanskar_502() {
    int n;
    cin>>n;

    vector<vector<pair<int, int>>> adj(n+1);
    vector<int> indegree(n+1, 0);

    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
        indegree[u]++;
        indegree[v]++;
    }

    vector<int> ans(n-1);
    int st;

    
    for(int i=0; i<=n; i++){
        if(indegree[i] > 2){
            cout<<-1<<nl;
            return;
        }

        if(indegree[i]== 1){
            st= i;
        }
    }

    dfs(st, -1, 2, adj, ans);

    for(int i=0; i<n-1; i++){
        cout<<ans[i]<<sp;
    }
    cout<<nl;

    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        sanskar_502();
}

/*
    Golden Rules:
    Solutions are simple.
    Proofs are simple.
    Implementations are simple.
*/