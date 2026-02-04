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
1 room --> min(X) boys + min(Y) girls  <= N
(N- X+ Y)== in one

10 10 2 1 5

2 1   --> 2 extra   8 9
2 1   --> 4 extra   6 8
2 1   --> 6         4 7
2 1    -->8         2 5
*/



void sanskar_502() {
    ll b,g,x,y,n;
    cin>>b>>g>>x>>y>>n;



    if (x + y > n) {
        cout << -1 << nl;
        return;
    }


    ll minroom= (b + g + n - 1) / n;

    ll  a= b/x;
    ll c= g/y;


    ll maxi_room = min(a, c);

    if(minroom <= maxi_room ){
        cout<<minroom<<nl;
    }else{
        cout<<-1<<nl;
    }


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