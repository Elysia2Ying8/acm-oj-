#### 题目描述

One day, *Kiki* wants to visit one of her friends. As she is liable to carsickness , she wants to arrive at her friend’s home as soon as possible . Now give you a map of the city’s traffic route, and the stations which are near *Kiki*’*s* home so that she can take. You may suppose *Kiki* can change the bus at any station. Please find out the least time *Kiki* needs to spend. To make it easy, if the city have n*n* bus stations ,the stations will been expressed as an integer 1,2,3,⋯,*n*.

[hdu 2680](https://acm.hdu.edu.cn/showproblem.php?pid=2680)

#### 输入

There are several test cases.
Each case begins with three integers *n*,*m* and *s*,(*n*<1000,*m*<20000,1≤*s*≤*n*) *n* stands for the number of bus stations in this city and *m* stands for the number of directed ways between bus stations .(Maybe there are several ways between two bus stations.) *s* stands for the bus station that near *Kiki*’*s* friend’s home.
Then follow *m* lines ,each line contains three integers *p*,*q*,*t* (0<*t*≤1000). means from station p*p* to station *q* there is a way and it will costs *t* minutes .
Then a line with an integer *w*( 0<*w*<*n*), means the number of stations *Kiki* can take at the beginning. Then follows w*w* integers stands for these stations.

#### 输出

The output contains one line for each data set : the least time Kiki needs to spend ,if it’s impossible to find such a route ,just output “-1”.

#### 样例输入 复制

```cpp
5 8 5
1 2 2
1 5 3
1 3 4
2 4 7
2 5 6
2 3 5
3 5 1
4 5 1
2
2 3
4 3 4
1 2 3
1 3 4
2 3 2
1
1
```

#### 样例输出 复制

```cpp
1
-1
```

#### 来源/分类

[图论](http://172.20.8.83/problemset.php?search=图论) [最短路径](http://172.20.8.83/problemset.php?search=最短路径) [有向图](http://172.20.8.83/problemset.php?search=有向图) [反图](http://172.20.8.83/problemset.php?search=反图) [Dijkstra](http://172.20.8.83/problemset.php?search=Dijkstra) [链式前向星](http://172.20.8.83/problemset.php?search=链式前向星) [优先队列](http://172.20.8.83/problemset.php?search=优先队列)

---

---

---

#### 翻译

有多个样例

第一行输入 **n（车站个数），m（道路个数），s（终点站）** 

接下来 m 行

每行输入 **p（起点），q（终点），t（p到q所花的时间） **

接下来输入一个 **w（起点个数）**

接下来 w 个数据 **w$i$（以 w$i$ 为起点）**

输出到终点 **s** 的 **最小值**



#### 包含知识点

+ 图论
+ 最短路径
+ dijkstra
+ 有向图
+ 反图
+ 链式前向星
+ 优先队列



#### 思路

1. 正向思考：

+ 使用一次 *dijkstra* 算法可找到图中所有点到起点 *u* 的最短距离 【 **O(nlogn)** 】，则 *d[s]* 代表终点 *s* 到起点 *u* 的最短距离，那么我们如果使用 *n* 次*dijkstra* 算法则可以知道图中 *任意一点到任意一点* 的最短距离【**O(n*nlogn)**】，但由于题中给出了起点个数，所以我们没有必要知道所有情况的最短距离，只需要知道 *w* 个起点的最短距离即可，即使用 *w* 次【**O(w*nlogn)**】

> 但是没有这个必要

2. **反图**：

+ 我们将 **终点 s** 视为 **起点s**，将所有的边反建，建立起 **反图** ，那么只需使用一次以 **s** 为起点的 **dijkstra** 即可知道所有点到 **s** 的距离



#### 代码演示

```cpp
#define  _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
const int mxn = 2e4 + 5, INF = 0x3f3f3f3f;
typedef pair<int, int> PII;
int h[mxn], e[mxn], ne[mxn], w[mxn], idx;
int d[mxn];
bool st[mxn];
int n, m, s;
void add(int a, int b, int c) {
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx++;
}
void dijkstra(int u) {
	memset(d, 0x3f, sizeof d);
	memset(st, false, sizeof st);
	priority_queue<PII, vector<PII>, greater<PII>> heap;
	d[u] = 0;
	heap.push({ 0,u });
	while (heap.size()) {
		auto t = heap.top();
		heap.pop();
		int distance = t.first, ver = t.second;
		if (st[ver])continue;
		st[ver] = true;
		for (int i = h[ver]; i != -1; i = ne[i]) {
			int j = e[i];
			if (d[j] > distance + w[i]) {
				d[j] = distance + w[i];
				heap.push({ d[j],j });
			}
		}
	}
}
signed main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	while (cin >> n >> m >> s && n && m && s) {
		memset(h, -1, sizeof h);
		idx = 0;//记得初始化
		for (int i = 1; i <= m; ++i) {
			int a, b, c;
			cin >> a >> b >> c;
			add(b, a, c);//反边建立返图
		}
		dijkstra(s);
		int q, t;
		int mn = INF;
		cin >> q;
		while (q--) {
			cin >> t;
			mn = min(mn, d[t]);
		}
		if (mn == INF)mn = -1;
		cout << mn << '\n';
	}
	return 0;
}
```



#### 注意事项

+ *h* 和 *idx* 需要在循环内初始化，因为题目可以有多个案例