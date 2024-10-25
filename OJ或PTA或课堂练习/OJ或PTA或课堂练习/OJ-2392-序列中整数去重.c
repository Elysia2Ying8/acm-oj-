//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int n, ans[1005], tot=0;
//int b[5005];//桶计数
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
//老师带着做的

//以下为扩展，桶排序

//////////#define _CRT_SECURE_NO_WARNINGS
//////////#include<stdio.h>
//////////int n, ans[1005], a[1005];
//////////int b[5005];//桶计数
//////////int main()
//////////{
//////////	scanf("%d", &n);
//////////
//////////	for (int x, i = 1; i <= n; i++) 
//////////		scanf("%d", &a+i/*a[i]*/), b[a[i]]++;//统计数
//////////	
//////////	for (int i = 2; i <= n; i++)
//////////		b[i] += b[i - 1];//前缀和
//////////	
//////////	for (int i = n; i > 0; i--)
//////////		ans[b[a[i]]] = a[i], b[a[i]]--;//三层嵌套
//////////
//////////	for (int i = 1; i <= n; i++)
//////////		printf("%d%c", ans[i], i == n ? '\n' : ' ');
//////////
//////////	return 0;
//////////}

//難しいすぎる，多思考，重要