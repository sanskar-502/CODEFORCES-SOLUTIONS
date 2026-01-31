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

1 2 3 4 5
3  2  4  1 5

1 2 3 4 5 6
3 4 2 5 1  6
                7 1 6 2 5 3 4
*/



void sanskar_502() {
    int n;
    cin>>n;

   int j=n;
   int i=1;
   int k = n/2;
   vector<int> ans;

   while(k){
    ans.push_back(j);
    ans.push_back(i);

    j--;
    i++;
    k--;
   }

   if(odd(n)){
    ans.push_back(i);
   }else{
    
   }


   reverse(ans.begin(), ans.end());

   for(int i=0; i<ans.size(); i++){
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