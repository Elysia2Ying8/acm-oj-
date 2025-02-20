//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int t, p;
//bool check(int p) {
//	int x = 0;
//	while (1) {
//		int a = x * x * x;
//		int b = (x - 1) * (x - 1) * (x - 1);
//		if (a - b == p)return true;
//		if (a - b > p)break;
//		++x;
//	}
//	return false;
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> t;
//	while (t--) {
//		cin >> p;
//		cout << (check(p) ? "YES" : "NO") << '\n';
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//#define f(x) 3*x*(x+1)+1
//#define int long long
//bool check(int x, int p) {
//    return f(x) < p; 
//}
//bool b_s(int p) {
//    int l = 1, r = sqrt(p) + 1, mid;
//    while (l < r) {
//        mid = l + r >> 1;
//        if (check(mid, p)) l = mid + 1;
//        else r = mid;
//    }
//    return f(r) == p;
//}
//signed main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int t, p;
//    cin >> t;
//    while (t--) {
//        cin >> p;
//        cout << (b_s(p) ? "YES" : "NO") << '\n';
//    }
//    return 0;
//}