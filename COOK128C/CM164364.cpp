#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1000000007;

void solve() {
 ll n, x;
 cin >> n >> x;

 ll a[n], uniq = 0;
 map<int, bool> seen;
 for(ll i = 0; i < n; i++) {
  cin >> a[i];
  if(!seen[a[i]]) {
   uniq++;
   seen[a[i]] = true;
  }
 }

 cout << min(uniq, n-x) << '\n';
}

int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 ll t;
 cin >> t;
 while(t--) {
  solve();
 }

 return 0;
}
