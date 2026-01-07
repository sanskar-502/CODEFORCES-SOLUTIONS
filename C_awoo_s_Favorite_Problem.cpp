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
i have to change s to t

ab -->  ba
bc -->  cb


bcaabababc

aabababc

abaababc

baaababc
baabaabc

aabc
baac

abbabc

bababc
bbaabc
bbabac
bbbaac



ab --> ba
bc --> cb

so i can convert a to b
and b  to  c

if b present in t then i have to check location c and b in string t
as a does not affect the count a can b converted into b but c can't and c can't in b/w and b

aaaab
baaaa

caacbbca
babcbcaa

a

*/



void sanskar_502() {
    int n;
    cin>>n;

    string s, t;
    cin>>s;
    cin>>t;

    set<int> a, b, c;

    for(int i=0; i<n; i++){
        if(s[i]=='a') a.insert(i);
        else if(s[i]== 'b') b.insert(i);
        else c.insert(i);
    }


    for(int i=0; i<n; i++){

        if(s[i]== t[i]){
            continue;
        }

        if(t[i]== 'b'){

            if(s[i] == 'c')
            { 
            cout<<"NO\n";
            return;
            }
            else{   // s[i] must be a and b must lies close to a
                auto itB= lower_bound(b.begin(), b.end(), i);
                auto itC= lower_bound(c.begin(), c.end(), i);

                int b_pos= (itB == b.end() ? INT_MAX : *itB); 
                int c_pos= (itC == c.end() ? INT_MAX : *itC); 

                if(c_pos > b_pos){
                    b.erase(b_pos);
                    a.insert(b_pos);
                    s[b_pos] = 'a';
                }else{
                    cout<<"NO\n";
                    return;
                }
            }  
        }

         else if(t[i]== 'c'){
            if(s[i] == 'a')
            { 
            cout<<"NO\n";
            return;
            }

            else{   // s[i] must be a and b must lies close to a
                auto itA= lower_bound(a.begin(), a.end(), i);
                auto itC= lower_bound(c.begin(), c.end(), i);

                int a_pos= (itA == a.end() ? INT_MAX : *itA); 
                int c_pos= (itC == c.end() ? INT_MAX : *itC); 

                if(a_pos > c_pos){
                    c.erase(c_pos);
                    b.insert(c_pos);

                    s[c_pos] = 'b';
                }else{
                    cout<<"NO\n";
                    return;
                }
            }  
        }else{
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
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