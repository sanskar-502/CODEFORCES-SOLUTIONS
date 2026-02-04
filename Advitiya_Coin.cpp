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




void sanskar_502() {
    int n,k;
    cin>>n>>k;

    vi a(n);
    for(int i=0; i<n; i++)  cin>>a[i];

    int min_so_far= INT_MAX;
    int maxi_so_far= INT_MIN;
    int cnt=0;

    for(int i=0; i<n; i++){
        min_so_far= min(a[i], min_so_far);

        maxi_so_far= max(a[i], maxi_so_far);

        if(((maxi_so_far- min_so_far) - k) > 0){
            cnt++;
            min_so_far= INT_MAX;
            maxi_so_far= INT_MIN;
        }
    }

    cout<<cnt<<nl;
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