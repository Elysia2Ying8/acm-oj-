//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int n, k;
//char a[mxn], ans[mxn];
//priority_queue<int> q;
//map<int, int> t;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> k;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i) {
//		t[a[i]]++;
//		if(t[a[i]]==1)q.push(a[i]);
//		if (i < k)continue;
//		while (q.size() && t[q.top()] != 1)q.pop();
//		if (q.empty())ans[i] = -1;
//		else ans[i] = q.top();
//		t[a[i - k + 1]]--;
//		if (t[a[i - k + 1]] == 1)q.push(a[i - k + 1]);
//	}
//	for (int i = k; i <= n; ++i)cout << ans[i] << (i == n ? '\n' : ' ');
//	return 0;
//}