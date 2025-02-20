//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//string a;
//int b, r;
//vector<int> A;
//vector<int> div(vector<int> &A, int B,int &r) {
//	vector<int> C;
//	r = 0;
//	for (int i = 0; i < A.size(); ++i) {
//		r = r * 10 + A[i];
//		C.push_back(r / b);
//		r %= b;
//	}
//	reverse(C.begin(), C.end());
//	while (C.size() > 1 && C.back() == 0)C.pop_back();
//	return C;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> a >> b;
//	for (int i = 0; i < a.size(); ++i)A.push_back(a[i] - '0');
//	auto C = div(A, b, r);
//	for (int i = C.size() - 1; i >= 0; --i)cout << C[i];
//	cout << '\n' << r << '\n';
//	return 0;
//}