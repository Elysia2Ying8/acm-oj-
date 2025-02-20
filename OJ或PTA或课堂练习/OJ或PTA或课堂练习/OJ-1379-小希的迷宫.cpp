//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 1e5 + 5, M = 5e5 + 5;
//int n, m;
//int p[N];
//bool vis[N];
//int find(int x) {
//	if (p[x] != 0)p[x] = find(p[x]);
//	return p[x];
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	while (cin >> n >> m && n != -1 && m != -1) {
//		int ans = 0, cnt = 0;
//		++cnt, ans += 2;
//		memset(p, -1, sizeof p);
//		memset(vis, false, sizeof vis);
//		p[n] = 0, p[m] = p[n], vis[n] = vis[m] = true;
//		while (cin >> n >> m && n && m) {
//			if (!vis[n] && !vis[m]) {
//				p[n] = n, p[m] = find(p[n]),++cnt;
//				if (find(p[n] == 0))
//					vis[n] = vis[m] = true, ans += 2;
//			}
//			else if (vis[n] && !vis[m]) {
//				p[m] = find(p[n]), ++cnt;
//				if (find(p[n]) == 0)
//					vis[n] = vis[m] = true, ++ans;
//			}
//			else if (!vis[n] && vis[m]) {
//				p[n] = find(p[m]), ++cnt;
//				if (find(p[m]) == 0)
//					vis[n] = vis[m] = true, ++ans;
//			}
//			else cout << "No" << '\n';
//		}
//		if (ans == cnt + 1)cout << "Yes" << '\n';
//		else cout << "No" << '\n';
//	}
//	return 0;
//}