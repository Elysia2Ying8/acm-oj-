#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n, a[mxn];
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i)a[0] = max(a[i], a[i - 1]);
//	a[0] *= 2;
//	cout <<  a[0] << '\n';
//	return 0;
//}

//第一种不行不知道为啥

//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int n, m = 0, a[mxn];
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; ++i)cin >> a[i];
//	for (int i = 1; i <= n; ++i)m = max(a[i], m);
//	m *= 2;
//	cout << m << '\n';
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int m = 0, n, t;
//    scanf("%d", &n);
//    while (n--) { scanf("%d", &t), m = max(m, t); }
//    printf("%d", 2 * m);
//    return 0;
//}

/*        
               时间复杂度O(N)
         公式：(a & b) + (a∣b)≤2⋅max(a, b)
*/