#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 10;
//int n, k, q, a[mxn];
//
//void qs(int l, int r)
//{
//    if (l >= r)return;
//    int s = 1, p = 1;
//    while (a[s] < a[r])++s;
//    for (int p = s + 1; p < r; ++p) {
//        if (a[p] < a[r])swap(a[s++], a[p]);
//    }
//    swap(a[s], a[r]);
//    qs(l, s - 1), qs(s + 1, r);
//}
//
//signed main()
//{
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)scanf("%d", a + i);
//    qs(1, n);
//    for (int i = 1; i <= n; i++)printf("%d%c", a[i], i == n ? '\n' : ' ');
//    return 0;
//}

//递归，nlogn

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 10;
//int n, k, q, a[mxn];
//
//void qs(int l, int r, int arr[])
//{
//	if (l >= r)return;
//	int s = 1, p = 1;
//	while (s < r && a[s] < a[r])++s;
//	for (int p = s + 1; p < r; ++p)
//		if (a[p] < a[r])swap(a[s++], a[p]);
//	swap(a[s], a[r]);
//	qs(1, s - 1, arr), qs(s + 1, r, arr);
//}
//
//signed main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	qs(1, n, a);
//	for (int i = 1; i <= n; ++i)printf("%d%c", a[i], (i == n ? '\n' : ' '));
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 10;
//int n, k, q, a[mxn];
//void qs(int l, int r, int arr[]) { // 快速排序
//	if (l >= r) return;
//	int s = l, p = l;
//	while (s < r && a[s] < a[r]) ++s; // 寻找第一个大于等于基准值的元素
//	for (int p = s + 1; p < r; ++p) // 遍历剩余元素
//		if (a[p] < a[r]) swap(a[s++], a[p]); // 小于基准值的元素与第一个大于等于基准值的元素交换位置
//	swap(a[s], a[r]); // 更新基准值位置，使其处于中间位置
//	qs(l, s - 1, arr), qs(s + 1, r, arr); // s-1, s+1 重要
//}
//int main() {
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i) scanf("%d", a + i);
//	qs(1, n, a);
//	for (int i = 1; i <= n; ++i) printf("%d%c", a[i], i == n ? '\n' : ' ');
//	return 0;
//}



//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n;
//int a[mxn];
//void kefuxiaoxiangbangnipaixu(int a[], int l, int r) {
//	if (l >= r)return;
//	int mid = ((l + r) >> 1);
//	int i = l, j = r;
//	while (i < j) {
//		while (a[i] < a[mid])++i;
//		while (a[j] > a[mid])--j;
//		if (i < j)swap(a[i], a[j]);
//	}
//	kefuxiaoxiangbangnipaixu(a, l, mid);
//	kefuxiaoxiangbangnipaixu(a, mid+1, r);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	kefuxiaoxiangbangnipaixu(a, 1, n);
//	for (int i = 1; i <= n; ++i)
//		cout << a[i] << (i == n ? '\n' : ' ');
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 5e5 + 5;
//int n;
//int a[mxn];
//int l, r, mid;
//void kefuxiaoxiangbangnipaixu(int a[], int l, int r) {
//	if (l >= r)return;
//	mid = ((l + r) >> 1);
//	int i = l-1, j = r+1;
//	while (i < j) {
//		do ++i; while (a[i] < a[mid]);
//		do --j; while (a[j] > a[mid]);
//		if (i < j)swap(a[i], a[j]);
//	}
//	kefuxiaoxiangbangnipaixu(a, l, mid);
//	kefuxiaoxiangbangnipaixu(a, mid + 1, r);
//}
//signed main()
//{
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	kefuxiaoxiangbangnipaixu(a, 1, n);
//	for (int i = 1; i <= n; ++i)
//		cout << a[i] << (i == n ? '\n' : ' ');
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n;
//int a[mxn];
//void kefuxiaoxiangbangnipaixu(int l, int r) {
//	if (l >= r)return;
//	int mid = ((l + r) >> 1);
//	int i = l, j = r;
//	while (i < j) {
//		while (a[i] < a[mid])++i;
//		while (a[j] > a[mid])--j;
//		if (i < j)swap(a[i], a[j]);
//	}
//	kefuxiaoxiangbangnipaixu(l, mid);
//	kefuxiaoxiangbangnipaixu(mid + 1, r);
//}
//signed main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; ++i)scanf("%d", a + i);
//	kefuxiaoxiangbangnipaixu(1, n);
//	for (int i = 1; i <= n; ++i)
//		printf("%d%c", a[i], i == n ? '\n' : ' ');
//	return 0;
//}