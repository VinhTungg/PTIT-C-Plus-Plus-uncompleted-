#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
#define ford(i,a,b) for(int i = a; i >= b; --i)
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.fi < b.fi;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<pair<int, int>> v(n);
        for(auto &num : v) {
            cin >> num.second;
            num.first = abs(x - num.second);
        }
        stable_sort(all(v), cmp);
        for(auto &num : v) cout << num.second << ' ';
        cout << endl;
    }
}