//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//string a;
//int b;
//vector<int> A;
//vector<int> mul(vector<int> A, int B)
//{
//	vector<int> C;
//	int t = 0;
//	for (int i = 0; i < A.size(); ++i) {
//			int ans = A[i] * B;
//			t += ans;
//			C.push_back(t % 10);
//			t /= 10;
//	}
//	while (t)C.push_back(t % 10), t /= 10;
//	while (C.size() > 1 && C.back() == 0)C.pop_back();
//	return C;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//	auto C = mul(A, b);
//	for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//	cout << '\n';
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e7 + 5;
//string a, b;
//vector<int> A, B;
//int t[mxn];
//vector<int> mul(vector<int> A, vector<int> B) {
//	vector<int> C;
//	int la = A.size(), lb = B.size();
//	int l = la + lb;
//	for (int i = 0; i < la; ++i) {
//		for (int j = 0; j < lb; ++j) {
//			t[j + i] += A[i] * B[j];
//			t[i + j + 1] += t[i + j] / 10;
//			t[i + j] %= 10;
//		}
//	}
//	for (int i = 0; i < l; ++i)C.push_back(t[i]);
//	while (C.size() > 1 && C.back() == 0)C.pop_back();
//	return C;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> a >> b;
//	for (int i = a.size() - 1; i >= 0; --i)A.push_back(a[i] - '0');
//	for (int i = b.size() - 1; i >= 0; --i)B.push_back(b[i] - '0');
//	auto C = mul(A, B);
//	for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//	cout << '\n';
//	return 0;
//}