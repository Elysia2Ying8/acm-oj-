#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	char ch;
//	int n = 26;
//	while (n--) {
//		cin >> ch;
//		cout << (int)ch << ' ' << (int)ch - 65 << '\n';
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 6;
//int n, m;
//int a, b, k;
//int f[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	while (m--) {
//		cin >> a >> b >> k;
//		f[a] += k, f[b + 1] -= k;
//	}
//	for (int i = 1; i <= n; ++i) {
//		f[i] += f[i - 1];
//		cout << f[i] << (i == n ? '\n' : ' ');
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e5 + 5;
//int n;
//int a[mxn];
//int ans;
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	for (int k = 3; k <= n; ++k) {
//		int i = 1, j = k - 1;
//		while (i < j) {
//			if (a[i] + a[j] > a[k]) {
//				ans += j - i;
//				--j;
//			}
//			else ++i;
//		}
//	}
//    cout << ans << '\n';
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e6 + 6, mod = 1e9 + 7;
//int n, ans;
////0,�ߣ�1,��
//int f[mxn][2];
//int dp[mxn];
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	f[1][0] = f[2][0] = 1;
//	f[3][0] = 1, f[3][1] = 1;
//	f[4][0] = f[4][1] = 1;
//	for (int i = 1; i <= n; ++i) {
//		if (i >= 5) {
//			//�����������߹����ģ���ô��ǰ������һ�������ģ�
//			//ǰһ��Ҳ�����ģ���Ϊǰһ�����ߵ����������ǰ������������
//			f[i][0] = (f[i - 2][1] + f[i - 1][1]) % mod;
//			//�����������������ģ���ô��ǰ�ĸ���һ�����ߵģ�
//			//������ǰ���������ߵ�
//			//������ǰ����������������Ϊ���������һ���а�����
//			f[i][1] = (f[i - 4][0] + f[i - 2][0]) % mod;
//		}
//		dp[i] = (f[i][0] + f[i][1]) % mod;
//	}
//	cout << dp[n] << '\n';
//	return 0;
//}