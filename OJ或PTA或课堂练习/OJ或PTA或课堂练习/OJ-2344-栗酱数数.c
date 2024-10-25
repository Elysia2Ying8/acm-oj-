//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, vis[100000];
//	for (int i = 1; i < 100000; i++) {
//		if (i % 10 == 4)vis[i] = 2;//最低位是4
//		else if (vis[i / 10] == 2)vis[i] = 2;//非最低位是4
//		else vis[i] = i % 4 == 0 ? 3 : 0;//判断是否为4的倍数
//	}
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (vis[i] == 0)printf("%d\n", i);
//	}
//	return 0;
//}

//这种数组的思维好好学