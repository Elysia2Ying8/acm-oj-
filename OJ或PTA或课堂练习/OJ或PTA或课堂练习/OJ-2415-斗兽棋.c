////////#define _CRT_SECURE_NO_WARNINGS
////////#include<stdio.h>
////////char a[10], b[10], c[100];
////////void tiangou(char a, char b);
////////int main()
////////{
////////    tiangou(a[10], b[10]);
////////    return 0;
////////}
////////void tiangou(char a[10], char b[10])
////////{
////////    scanf("%s%s", &a, &b);
////////
////////    if (a == "elephant\0") {
////////        if (b == "tiger\0" || "cat\0")c[0] = "tiangou yiwusuoyou\0";
////////        else c[0] =  "tiangou txdy\0"; 
////////    }
////////    else if (a == "tiger\0") {
////////        if (b == "cat\0" || "mouse\0")c[0] = "tiangou yiwusuoyou\0";
////////        else c[0] = "tiangou txdy\0";
////////    }
////////    else if (a == "cat\0") {
////////        if (b == "mouse\0")c[0] = "tiangou yiwusuoyou\0";
////////        else c[0] = "tiangou txdy\0";
////////    }
////////    else if (a == "mouse\0") {
////////        if (b == "elephant\0")c[0] = "tiangou yiwusuoyou\0";
////////        else c[0] = "tiangou txdy\0";
////////    }
////////    printf("%s", c[0]);
////////    return c[0];
////////}
////////
//////
////////以上作废重写
//////
////////
////////#define _CRT_SECURE_NO_WARNINGS
////////#include<stdio.h>
////////char s[2][100] = {"tiangou yiwusuoyou","tiangou txdy"};
////////char nn[20], nm[20];
////////int n;
////////int main()
////////{
////////	scanf("%s%s", nn, nm);
////////	if (nn == "elephant") {
////////		if (nm == "elephant" || nm == "tiger" || nm == "cat")
////////			printf("tiangou yiwusuoyou\n");
////////		else if (nm == "mouse")
////////			printf("tiangou txdy\n");
////////	}
////////	
////////	else if (nn == "tiger") {
////////		if (nm == "tiger" || nm == "cat" || nm == "mouse")
////////			printf("tiangou yiwusuoyou\n");
////////		else if (nm == "elephant")
////////			printf("tiangou txdy\n");
////////	}
////////	
////////	else if (nn == "cat") {
////////		if (nm == "cat" || nm == "mouse")
////////			printf("tiangou yiwusuoyou\n");
////////		else if (nm == "elephant" || nm == "tiger")
////////			printf("tiangou txdy\n");
////////	}
////////	
////////	else if (nn == "mouse") {
////////		if (nm == "mouse" || nm == "elephant")
////////			printf("tiangou yiwusuoyou\n");
////////		else if (nm == "tiger" || nm == "cat")
////////			printf("tiangou txdy\n");
////////	}
////////	return 0;
////////}
//////
////////不会，可能是字符数组使用方法不对




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int g[26][26];
//char a[] = "etcme", s[2][100] = { "tiangou yiwusuoyou","tiangou txdy" };
//char s1[100], s2[100];
//int main()
//{
//	for (int i = 0; i < 4; i++)
//		g[a[i + 1] - 'a'][a[i] - 'a'] = 1;
//	scanf("%s%s", s1, s2);
//	printf("%s\n", s[g[s1[0] - 'a'][s2[0] - 'a']]);
//	return 0;
//}

//这啥啊看不懂