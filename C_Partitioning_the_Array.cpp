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
good concept of mod and gcd
if
a1 % m == ak % m
then
(a1- ak)%m ==0

if x1 % m= 0 , x2%m=0, x3% m=0  then ans gcd(x1, x2, x3..)  !=1  if any m exits

*/

vector<int> findDivisor(int n){    // it is possible to divides array based on divisors only
    vector<int> ans;

    for(int i=1; i* i <= n; i++){
        if(n % i == 0){
            ans.push_back(i);
            if (n / i != i) ans.push_back(n / i);
        }
    }
    return ans;
}

void sanskar_502() {
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> divisors = findDivisor(n);
    int cnt=0;

    for(int i=0; i<divisors.size(); i++){   // partition of array
        int k= divisors[i];
        int g=0;
        for(int j= k; j<n; j++ ){
            g= __gcd(g, abs(a[j]- a[j- k]));
        }

        if(g != 1)
            cnt++;
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