//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, id[400], c[400], m[400], e[400], t[400];
//int cmp(int x, int y) {
//	if (t[x] == t[y] && c[x] == c[y])return x < y;
//	else if (t[x] == t[y])return c[x] > c[y];
//	else return t[x] > t[y];
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d%d%d", c + i, m + i, e + i);
//		t[i] = c[i] + m[i] + e[i];
//		id[i] = i;
//	}
//	sort(id + 1, id + n + 1, cmp);
//	for (int i = 1; i <= n; i++)
//		printf("%d %d\n", id[i], t[id[i]]);
//	return 0;
//}

//编译错误，sort函数是c++的东西，懂了就行