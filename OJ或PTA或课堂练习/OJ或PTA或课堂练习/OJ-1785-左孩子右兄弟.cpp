//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n;
////µù
//int p[mxn];
////²ãÊý
//int ans;
//map<int, int> mp;
//int find(int x) {
//    if (p[x] != x) {
//		++ans;
//		p[x] = find(p[x]);
//	}
//	return p[x];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	p[1] = 1;
//	mp[1] = 0;
//	for (int i = 2; i <= n; ++i)cin >> p[i];
//	for (int i = 1; i <= n; ++i) {
//		ans = 0;
//		find(i);
//		mp[i] = ans + mp[find(i)];
//	}
//	int x = mp[n];
//	ans = 0;
//	for (int i = n; i >= 2; --i) {
//		if (mp[i] == x)continue;
//		ans += i; break;
//	}
//	cout << ans << '\n';
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 9;
//vector<int> a[mxn];
//int n, res, cnt;
//int dfs(int u) {
//    int cnt = 0;
//    for (int i = 0; i < a[u].size(); i++) {
//        cnt = max(cnt, dfs(a[u][i]));
//    }
//    return cnt + a[u].size();
//}
//int main() {
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 2; i <= n; ++i) {
//        int c;
//        cin >> c;
//        a[c].push_back(i);
//    }
//    res = dfs(1);
//    cout << res << "\n";
//    return 0;
//}