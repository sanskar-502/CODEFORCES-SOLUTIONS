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
    n flowers
    beauty a1, a2 .... an

    m flower required



    3 5 2 3 3 5 8 1 2
    4 6 2 4 6

    3 5 2 3 3 5 8 1 2
    1 2 3 4 5 6 7 8 9

   1 2 2 3 3 3 5 5 8
   8 3 9 1 4 5 2 6 7      
   
   
   1 2
   3 4

*/



void sanskar_502() {
    int n;
    int m;
    cin>>n>>m;

    vi a(n);
    vi b(m);

    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<m; i++)  cin>>b[i];

  
    vi pre(m, INT_MAX);
    vi suff(m, INT_MIN);
    int j=0; 

    for(int i=0; i<n; i++){

        if(j < m && a[i] >= b[j]){
            pre[j]= i;
            j++;
        }
    }

    if(pre[m-1] != INT_MAX){
        cout<<0<<nl;
        return;
    }

    j= m-1;

    for(int i= n-1; i>=0; i--){
        
        if(j >= 0 && a[i] >= b[j]){
            suff[j]=i;
            j--;
        }
    }


    int ans= INT_MAX;

    for(int i=0; i<m; i++){

        int l= (i-1 < 0) ? -1 : pre[i -1];
        int r= (i + 1 == m ) ? n : suff[i +1];

        if(l < r)
            ans= min(ans , b[i]);
    }  

    if(ans == INT_MAX){
        cout<<-1<<nl;
        return;
    }
    
    cout<<ans<<nl;
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