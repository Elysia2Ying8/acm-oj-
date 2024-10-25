//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//long long k, n, ans, a[50] = { 1 };
//int main()
//{
//    scanf("%lld%lld", &k, &n);
//    for (int i = 1; i < 32; ++i)a[i] = k * a[i - 1];
//    for (int i = 0; i < 32; ++i)ans += ((n & 1ll << i) == (1ll << i)) * a[i];
//    printf("%lld\n", ans);
//    return 0;
//}

// #include<stdio.h>
// #define int long long
// const int mxn = 2e1+5;
// int k, n, ans, p[25] = {1};
// signed main(void){    
//     scanf("%lld%lld", &k, &n);
//     for(int i = 1; i < mxn; ++i) p[i] = k*p[i-1];
//     for(int i = 0; i < mxn; ++i) ans += ((n&1LL<<i) == (1LL<<i))*p[i];
//     printf("%lld\n", ans);    
//     return 0;
// }


//不会，答案也看不懂