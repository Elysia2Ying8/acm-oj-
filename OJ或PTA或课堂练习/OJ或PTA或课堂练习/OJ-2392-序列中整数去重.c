//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, ans[1005], tot=0;
//int b[5005];//Ͱ����
//int main()
//{
//	scanf("%d", &n);
//	for (int x, i = 1; i <= n; i++) {
//		scanf("%d", &x);
//		if (b[x])continue;
//		b[x]++;
//		ans[++tot] = x;
//	}
//	for (int i = 1; i <= tot; i++) {
//		printf("%d%c", ans[i], i == tot ? '\n' : ' ');
//	}
//	return 0;
//}
//��ʦ��������

//����Ϊ��չ��Ͱ����

//////////#define _CRT_SECURE_NO_WARNINGS
//////////#include<stdio.h>
//////////int n, ans[1005], a[1005];
//////////int b[5005];//Ͱ����
//////////int main()
//////////{
//////////	scanf("%d", &n);
//////////
//////////	for (int x, i = 1; i <= n; i++) 
//////////		scanf("%d", &a+i/*a[i]*/), b[a[i]]++;//ͳ����
//////////	
//////////	for (int i = 2; i <= n; i++)
//////////		b[i] += b[i - 1];//ǰ׺��
//////////	
//////////	for (int i = n; i > 0; i--)
//////////		ans[b[a[i]]] = a[i], b[a[i]]--;//����Ƕ��
//////////
//////////	for (int i = 1; i <= n; i++)
//////////		printf("%d%c", ans[i], i == n ? '\n' : ' ');
//////////
//////////	return 0;
//////////}

//�y���������룬��˼������Ҫ