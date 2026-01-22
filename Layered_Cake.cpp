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

5 5 4 3 2 2 1
0 1 2 3 4 5 6
*/



void sanskar_502() {
    int n, m;
    cin>>n>>m;

    vi a(n), b(m);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    sort(b.begin(), b.end(), greater<> ());
    ll cnt=0;

    for(int i=0; i<n; i++){
        int ele1= a[i];

        for(int j=0; j<m; j++){
            if(b[j] < ele1){
                cnt += (m - j);
                break;
            }
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