//#define  _CRT_SECURE_NO_WARNINGS
//#include<bits/stdc++.h>
//using namespace std;
//const int mxn = 1e5 + 5;
//int m;
//char op;
//int head,val[mxn], nxt[mxn], id;
//
//void init() {
//	head = -1;
//	id = 1;
//}
//
//void head_add(int x) {
//	
//	nxt[id] = head;
//	head = id;
//	val[id] = x;
//	id++;
//}
//
//void add(int k, int x) {
//	
//	nxt[id] = nxt[k];
//	nxt[k] = id;
//	val[id] = x;
//	id++;
//}
//
//void remove(int k) {
//	if (k == 0)head = nxt[head];
//	else nxt[k] = nxt[nxt[k]];
//}
//
//signed main()
//{
//	cin >> m;
//	init();
//	while (m--) {
//		int k, x;
//		cin >> op;
//		if (op == 'D') {
//			cin >> k;
//			remove(k);
//		}
//		else if (op == 'I') {
//			cin >> k >> x;
//			if (k == 0)head_add(x);
//			else add(k, x);
//		}
//	}
//	for (int i = head; i!=-1; i = nxt[i])
//		cout << val[i] << (i == -1 ? '\n' : ' ');
//	return 0;
//}