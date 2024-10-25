//////////#define _CRT_SECURE_NO_WARNINGS
//////////#include<stdio.h>
//////////int n, ans = 10000000;
//////////int main()
//////////{
//////////	int m, p, i;
//////////	scanf("%d", &n);
//////////	for (i = 1; i <= 3; i++) {
//////////		scanf("%d%d", &m, &p);
//////////		if (ans > (n + m - 1) / m * p)ans = (n + m - 1) / m & p;
//////////	}
//////////	printf("%d\n", ans);
//////////	return 0;
//////////}
//
//int n, ans = 10000000;
//signed main(void) {
//    scanf("%d", &n);
//    for (int m, p, i = 1; i <= 3; ++i) {
//        scanf("%d%d", &m, &p);
//        if (ans > (n + m - 1) / m * p) ans = (n + m - 1) / m * p; // 上取整运算
//    }
//    printf("%d\n", ans);
//    return 0;
//}

//我这根答案一样又哪里出问题了