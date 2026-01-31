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
5
2 1 5 4 3


and the first interaction where elements nts are not equal maxi of both

6
1 1 4 5 1 4

1 1 4 5 5 5
1 1 1 1 1 4

*/
vector<int> b;
bool solve(int mini, int maxi, int n, vector<int> & a, int k){
    
    int l_b = maxi - k;
    int u_b= mini + k;

    for (int i = 0; i < n; i++) {
        if (a[i] > l_b && a[i] < u_b) {
            if (a[i] != b[i]) {
                return false;
            }
        }
    }
    return true;
}


void sanskar_502() {
    int n;
    cin>>n;

    vi a(n);
    for(int i=0; i<n; i++)  cin>>a[i];


    b= a;
    sort(all(b));
    bool check = true;

    for(int i=0; i<n; i++){
        if(a[i] != b[i])
            check= false;
    }

    if(check){
        cout<<-1<<nl;
        return;
    }


    int s=1, e= 1e9;
    int k=0;

    while(s <= e){
        int mid= s + (e -s)/2;

        if(solve(b[0], b[n-1], n, a, mid)){
            k=mid;
            s = mid +1;
        }else{
            e = mid -1;
        }
    }

    cout<<k<<nl;
    
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