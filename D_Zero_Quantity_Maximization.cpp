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

c = d*a + b;
b= -d*a
d= -b/a;

same ds-- > maxi answer

*/



void sanskar_502() {
    ll n;
    cin>>n;

    vll a(n), b(n);
    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<n; i++)  cin>>b[i];

    bool allZero = all_of(b.begin(), b.end(), [](ll x) {
    return x == 0;
    });

    if(allZero){
        cout<<n<<endl;
        return;
    }

    ll cnt=0;
    ll maxi1=0;
    for(int i=0; i<n; i++){
        if(b[i]==0){
            cnt++;
            maxi1= max(cnt, maxi1);
        }
    }

    ll cnta=0;
     for(int i=0; i<n; i++){
        if(a[i]==0 && b[i]==0){
            cnta++;
        }
    }

    ll maxi2= 0;
    map<pair<ll, ll>, ll> mp;

    for(int i=0; i<n; i++){

        if(a[i]== 0  ||  b[i]== 0)  continue;
        ll num = -b[i];
        ll den= a[i];

        ll g = gcd(llabs(num), llabs(den));
        num /= g;
        den /= g;

        if (den < 0) {
            den = -den;
            num = -num;
        }

        mp[{num , den}]++;
    }

    
    for(auto & it: mp){
        maxi2= max(it.second, maxi2);
    }

    maxi2 += cnta;

    cout<<max(maxi1, maxi2)<<nl;



}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        sanskar_502();
}

/*
    Golden Rules:
    Solutions are simple.
    Proofs are simple.
    Implementations are simple.
*/