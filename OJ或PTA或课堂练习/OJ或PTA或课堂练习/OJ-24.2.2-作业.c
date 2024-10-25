//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int n;
//int f(int m);
//signed main()
//{
//    while (scanf("%lld", &n) == 1) {
//        printf("%lld\n", f(n));
//    }
//    return 0;
//}
//int f(int m)
//{
//    if (m == 0)return 0;
//    return 3 * f(m - 1) + 2;
//}
// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int n,md=1e9+7;
// int f(int n);
// signed main()
// {
//     while(scanf("%lld",&n)==1){
//         printf("%lld\n",f(n));
//     }
//     return 0;
// }
// int f(int n)
// {
//     if(n==0)return 0;
//     return (3*f(n-1)+1)%md;
// }


//
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e6 + 5, md = 1e9 + 7;
//int n, f[mxn];
//signed main()
//{
//    for (int i = 1; i < mxn; ++i) {
//        f[i] = (3 * f[i - 1] + 1) % md;
//    }
//    while (scanf("%lld", &n) == 1) {
//        printf("%lld\n", f[n]);
//    }
//    return 0;
//}

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// const int mxn=1e5+5;
// int a[mxn],sum[mxn];
// int n,q,k;
// void m();
// signed main()
// {
//     while(scanf("%lld%lld",&n,&q)==2){
//         for(int i=1;i<=n;++i)scanf("%lld",a+i);
//         for(int i=1;i<=q;++i){
//             scanf("%lld",&k);
//             for(int j=1;j<=k;++j){
//                 for(int p=j;p<=k;++p){
//                     sum[j]+=a[p];
//                 }
//             }
//             void m();
//             printf("%lld\n",sum[0]);
//         }
//     }
//     return 0;
// }
// void m()
// {
//     sum[0]=sum[1];
//     for(int i=1;i<=k;++i){
//         if(sum[0]<sum[i])sum[0]=sum[i];
//     }
// }


//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 1e5 + 5;
//int a[mxn], mx[mxn];
//int n, q, k;
//signed main()
//{
//    while (scanf("%lld%lld", &n, &q) == 2) {
//        for (int i = 1; i <= n; ++i) {
//            scanf("%lld", a + i);
//            mx[i] = a[i] + mx[i - 1] < a[i] ? a[i] : a[i] + mx[i - 1];
//        }
//        for (int i = 1; i <= q; ++i) {
//            scanf("%lld", &k);
//            printf("%lld%c", mx[k], i == q ? '\n' : ' ');
//        }
//    }
//    return 0;
//}
//
//#include<bits/stdc++.h>
//#define int long long
//const int max = 1e6 + 5, mxn = 1e9 + 7;
//int n, i, j, t, a[max][3];
//signed main()
//{
//    for (i = 0; i < max; i++) {
//        for (j = 1; j <= 3; j++) {
//            if (i <= 1 || j == 1) {
//                a[i][j] = 1;
//            }
//            else {
//                a[i][j] = (a[i - 2][j - 1] + a[i - 1][j] + 1) % mxn;
//            }
//        }
//    }
//    scanf("%lld", &t);
//    for (i = 0; i < t; i++) {
//        scanf("%lld", &n);
//        printf("%lld\n", a[n][3]);
//    }
//}