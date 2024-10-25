//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int MOD = 1e9 + 7;
//
//ll n, i, t;
//
//ll mpow(ll a, ll b) {
//    ll res = 1;
//    while (b) {
//        if (b & 1) res = (res * a) % MOD;
//        a = (a * a) % MOD;
//        b >>= 1;
//    }
//    return res;
//}
//
//int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> t;
//    while (t--) {
//        cin >> n >> i;
//        ll res = mpow(i, MOD - 2) % MOD;
//        cout << res << '\n';
//    }
//
//    return 0;
//}