//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int L, M, ans, vis[100000];
//int main()
//{
//	scanf("%d%d", &L, &M);
//	ans = L + 1;
//	for (int l, r, i = 1; i <= M; i++) {
//		scanf("%d%d", &l, &r);
//		for (int j = l; j <= r; j++)
//			vis[j] = 1;
//	}
//	for (int i = 0; i <= L; i++)
//		ans -= vis[i] == 1;
//	printf("%d\n", ans);
//	return 0;
//}

//ԭ������һ���������̶�ÿ��λ��ֻ�����һ������̫����



//����Ϊ��һ�ֲο�����
// 
// 
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e6 + 5;
//int L, M, ans, vis[mxn];
//signed main() {
//    scanf("%d%d", &L, &M), ++L; // ���� 1 ��λ
//    for (int l, r, i = 1; i <= M; ++i) {
//        scanf("%d%d", &l, &r), ++l, ++r; // �������� 1 ��λ
//        if (r > vis[l]) vis[l] = r;
//    }
//    ans = L;
//    for (int i = 1; i <= L; ++i) {
//        if (vis[i - 1] > vis[i]) vis[i] = vis[i - 1];
//        ans -= vis[i] >= i;
//    }
//    printf("%d\n", ans);
//    return 0;
//}