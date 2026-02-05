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

1 2 3 4 5 6 7 8 9 10 11 12 13 ..... 29

1, 3, 5, 7, 9, 11, 13, 15...  first  ...odd ... divisible by 1 not 2
2, 6, 10, 14, 18, 22, 26, 30... second  ... odd*2... divisible by 2 and not  4
4, 12, 20, 28, 36, 44... third  odd*3   ....divisible by 4 and not  8
8, 24, 40, 56...  
and so on


multiple of 2  --->  (n+1)/2     gap is 2   (n+1)/2 nos
muliple of 4 ---->    (n+3)/4   gap is 4     (n+3)/4  -  2 (rem) +1=  n+2/4
...        8 ----->             gap is 8      so ---->    (n+4)/8
                                gap is 16
*/



void sanskar_502() {
    ll n, k;
    cin>>n>>k;

    ll multiplier= 1;

    while(true){

        int cnt= (n+1)/2;

        if(k <= cnt){
            int ans= (2*k -1)*multiplier;
            cout<<ans<<nl;
            return;
        }else{
            k -=cnt;
            n = n/2;
            multiplier = 2 * multiplier;
        }
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