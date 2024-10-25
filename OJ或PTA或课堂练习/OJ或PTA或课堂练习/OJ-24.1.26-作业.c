//#define _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//int f(int n);
//signed main()
//{
//    printf("1 2 3\n%d %d %d\n", f(1), f(2), f(3));
//    return 0;
//}
//int f(int n)
//{
//    if (n == 0)return 1;
//    if (n == 1)return 3 * f(0);
//    if (n == 2)return f(1);
//    if (n == 3)return f(1) + 2 * f(2);
//}




//#include<bits/stdc++.h>
//using namespace std;
//int f(int n);
//signed main()
//{
//    printf("3 4 5 2 1 6\n");
//    printf("%d %d %d %d %d %d\n", f(3), f(4), f(5), f(2), f(1), f(6));
//    return 0;
//}
//int f(int n)
//{
//    if (n == 0)return 1;
//    if (n == 1)return f(0) + f(2);
//    if (n == 2)return f(0) + f(3) + f(4) + f(5);
//    if (n == 3)return f(0);
//    if (n == 4)return f(0) + f(3);
//    if (n == 5)return f(3) + f(4);
//    if (n == 6)return f(0) + f(1) + f(2) + f(3) + f(4) + f(5);
//}



// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// const int md=1e9+7;
// int f(int n);
// signed main()
// {
//     int nn;
//     scanf("%lld",&nn);
//     for(int i=2;i<=nn;++i){
//         printf("%lld\n",f(i));
//     }
//     return 0;
// }
// int f(int n)
// {
//     if(n==1||n==2)return 1;
//     else return (f(n-2)+f(n-1))%md;
// }



////////#include<bits/stdc++.h>
////////using namespace std;
////////#define int long long
////////const int mxn = 1e6 + 5, md = 1e9 + 7;
////////int a[mxn] = { 0,1 };
////////signed main()
////////{
////////    int n;
////////    scanf("%lld", &n);
////////    for (int i = 2; i <= n; ++i) {
////////        a[i] = (a[i - 2] + a[i - 1]) % md;
////////        printf("%lld\n", a[i]);
////////    }
////////    return 0;
////////}
//////// 
//////// 上面用数组对的，下面用函数说超限，不知为啥
//////// 
//////// #include<bits/stdc++.h>
//////// using namespace std;
//////// #define int long long
//////// const int md=1e9+7;
//////// int f(int n);
//////// signed main()
//////// {
////////     int nn;
////////     scanf("%lld",&nn);
////////     for(int i=2;i<=nn;++i){
////////         printf("%lld\n",f(i));
////////     }
////////     return 0;
//////// }
//////// int f(int n)
//////// {
////////     if(n==1||n==2)return 1;
////////     else return (f(n-2)+f(n-1))%md;
//////// }



//// #include<bits/stdc++.h>
//// using namespace std;
//// #define int long long
//// const int mxn=5e5+5;
//// int n,q,a[mxn],Q[mxn];
//// signed main()
//// {
////     scanf("%lld%lld",&n,&q);
////     for(int i=1;i<=n;++i)scanf("%lld",a+i);
////     for(int i=1;i<=q;++i)scanf("%lld",Q+i);
////     for(int i=1;i<=q;++i){
////         int L,R;
////         for(L=1;a[L]!=a[Q[i]];++L){}
////         printf("%lld ",L);
////         for(R=L;a[R]==a[Q[i]];++R){}
////         printf("%lld\n",R-1);
////     }
////     return 0;
//// }
////时间超限
//
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//const int mxn = 5e5 + 5;
//int n, q, Q;
//int a[mxn], L[mxn], R[mxn];
//signed main()
//{
//    scanf("%lld%lld", &n, &q);
//    for (int i = 1; i <= n; ++i)scanf("%lld", a + i);
//    L[1] = 1;
//    for (int i = 1; i < n; ++i) {
//        if (a[i + 1] == a[i])L[i + 1] = L[i];
//        else L[i + 1] = i + 1;
//    }
//    R[n] = n;
//    for (int i = n - 1; i >= 1; --i) {
//        if (a[i] == a[i + 1])R[i] = R[i + 1];
//        else R[i] = i;
//    }
//    for (int i = 1; i <= q; ++i) {
//        scanf("%lld", &Q);
//        printf("%lld %lld\n", L[Q], R[Q]);
//    }
//    return 0;
//}