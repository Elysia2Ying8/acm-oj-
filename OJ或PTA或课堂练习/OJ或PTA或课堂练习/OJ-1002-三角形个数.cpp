//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, i, p, q, a[3000], sum=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++) {
//		for (p = 0; p < n; p++) {
//			for (q = 0; q < n; q++) {
//				if (i!=p && i!=q && p!=q && a[q] + a[p] > a[i] && abs(a[q] - a[p]) < a[i]) {
//					sum++;
//				}
//			}
//		}
//	}
//	printf("%d", sum/6);
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 3e3 + 5;
//int n, ans = 0, m, l, r, a[mxn];
//signed main() {
//    scanf("%lld", &n);
//    for (int i = 1; i <= n; ++i) scanf("%lld", &a[i]);
//    sort(a + 1, a + 1 + n);
//    for (int i = n; i >= 3; i--) {
//        r = i - 1; l = 1;
//        while (l != r) {
//            if (a[l] + a[r] > a[i]) {
//                ans = ans + r - l;
//                r--;
//            }
//            else l++;
//        }
//    }
//    printf("%lld\n", ans);
//    return 0;
//}