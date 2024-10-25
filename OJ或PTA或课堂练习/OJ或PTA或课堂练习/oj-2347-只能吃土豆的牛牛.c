//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//const long long mxn = 3e1 + 5;
//long long k, n, ans, p[300000000] = { 1 };
//int main()
//{
//	for (long long i = 1; i < mxn; i++)p[i] = 3 * p[i - 1];
//	long long t, T = 0;
//	scanf("%lld", &t);
//	while (t--) {
//		ans = 0;
//		scanf("%lld", &k);
//		for (long long i = 0; i < 32; i++)
//			ans += ((k & 1ll << i) == (1ll << i)) * p[i];
//		printf("Case #%lld: %lld\n", ++T, ans);
//	}
//	return 0;
//}

//不会抄的，而且将参考代码写成c语言说编译错误，不知为什么