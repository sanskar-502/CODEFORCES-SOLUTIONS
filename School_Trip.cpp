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
10 3
1

7 8
n x k

5 5 3
5 % 3= 2 kam karna hai  and 1 badhana hai..
3 % 5= (5-3)= 2 badhana hai aur 3 kam karna hain

5 16

1

*/



void sanskar_502() {
    int n, x,k;
    cin>>n>>x>>k;

    if(x% k == 0){
        cout<<0<<nl;
        return;
    }

    if(x > k){
        int less=  x % k;
        int more=  k -less;

        bool possible = (n-x >= more);

        if(possible){
            cout<<min(less, more)<<nl;
        }else{
            cout<<less<<nl;
        }
        return ;
    }else if( k > x){

        int more= (k -x);
        int less= x;

        bool possible = (n-x >= more);

         if(possible){
            cout<<min(less, more)<<nl;
        }else{
            cout<<less<<nl;
        }

        return;

    }

    // cout<<2%3<<nl;
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