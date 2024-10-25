//#define _CRT_SECURE_NO_WARNINGS
//#include <bits/stdc++.h>
//using namespace std;
//const int mxn = 5e5 + 5;
//int n, d[mxn], tmp[mxn];
//void merge(int l, int mid, int r) {
//    int p = l, p1 = l, p2 = mid + 1;
//    while (p1 <= mid && p2 <= r) tmp[p++] = d[p1] < d[p2] ? d[p1++] : d[p2++];
//    while (p1 <= mid) tmp[p++] = d[p1++];
//    while (p2 <= r) tmp[p++] = d[p2++];
//    p = l;
//    while (p <= r) d[p] = tmp[p], p++;
//}
//void merge_sort(int l, int r) {
//    if (l >= r) return;
//    int mid = l + r >> 1;
//    merge_sort(l, mid);
//    merge_sort(mid + 1, r);
//    merge(l, mid, r);
//}
//int main() {
//    scanf("%d", &n);
//    for (int i = 1; i <= n; ++i) scanf("%d", d + i);
//    merge_sort(1, n);
//    for (int i = 1; i <= n; ++i) printf("%d%c", d[i], i == n ? '\n' : ' ');
//    return 0;
//}
//递归
//重要！！！学这个





// #include<bits/stdc++.h>
// using namespace std;
// signed main()
// {
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++)scanf("%d",a+i);
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         printf("%d%c",a[i],i==n-1?'\n':' ');
//     }
//     return 0;
// }
//sort函数排序

// #include<bits/stdc++.h>
// using namespace std;
// const int mxn=1e8+5;
// int n,a[mxn],b[mxn],c[mxn];
// signed main()
// {
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)scanf("%d",a+i),b[a[i]]++;
//     for(int i=1;i<=mxn;i++)b[i]+=b[i-1];
//     for(int i=n;i>=1;i--)c[b[a[i]]]=a[i],b[a[i]]--;
//     for(int i=1;i<=n;i++)printf("%d%c",c[i],i==n?'\n':' ');
//     return 0;
// }
//桶排序