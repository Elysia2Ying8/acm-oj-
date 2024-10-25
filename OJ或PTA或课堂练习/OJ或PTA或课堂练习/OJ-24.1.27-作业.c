//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e6 + 5, md = 1e9 + 7;
//int a[mxn] = { 0,1,1 };
//signed main()
//{
//    int n;
//    scanf("%lld", &n);
//    for (int i = 3; i < mxn; ++i)
//        a[i] = (a[i - 2] + a[i - 1]) % md;
//    printf("%lld\n", a[n]);
//    return 0;
//}

// #include<bits/stdc++.h>
// using namespace std;
// const int mxn=1e2+5;
// int n,a,b;
// int f(int n);
// signed main()
// {
//     scanf("%d",&n);
//     for(int i=1;i<=n;++i){
//         scanf("%d%d",&a,&b);
//         printf("%d\n",f(b-a+1));
//     }
//     return 0;
// }
// int f(int n)
// {
//     if(n==1||n==2)return 1;
//     else return f(n-1)+f(n-2);
// }

//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e2 + 5;
//int n, a, b, f[mxn] = { 0,1,1 };
//signed main()
//{
//    scanf("%lld", &n);
//    for (int i = 3; i < mxn; ++i)
//        f[i] = f[i - 1] + f[i - 2];
//    for (int i = 1; i <= n; ++i) {
//        scanf("%lld%lld", &a, &b);
//        printf("%lld\n", f[b - a + 1]);
//    }
//    return 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 4e1 + 5;
//int n, dp[3][mxn];
//signed main()
//{
//    dp[0][1] = dp[1][1] = dp[2][1] = 1;
//    for (int i = 1; i < mxn; ++i) {
//        dp[0][i + 1] = dp[0][i] + dp[1][i] + dp[2][i];
//        dp[1][i + 1] = dp[0][i] + dp[2][i];
//        dp[2][i + 1] = dp[0][i] + dp[1][i] + dp[2][i];
//    }
//    while (scanf("%lld", &n) == 1)
//        printf("%lld\n", dp[0][n] + dp[1][n] + dp[2][n]);
//    return 0;
//}