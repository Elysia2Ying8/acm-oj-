//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
//int n, m, a[25][25];
//signed main() {
//    scanf("%d", &n);
//    for (int r = 1; r <= n / 2; ++r) { // ����������Ȧ
//        int x = r, y = r;
//        for (int i = 0; i < 4; ++i) { // ˳ʱ��4��
//            for (int j = 0; j < n - 2 * r + 1; ++j) { // �߳�
//                a[x][y] = ++m;
//                x += dx[i], y += dy[i];
//            }
//        }
//    }
//    if (m < n * n) a[n + 1 >> 1][n + 1 >> 1] = n * n; // ����λ������
//    for (int i = 1; i <= n; ++i)
//        for (int j = 1; j <= n; ++j)
//            printf("%d%c", a[i][j], j == n ? '\n' : ' ');
//    return 0;
//}

//���ᣬ����