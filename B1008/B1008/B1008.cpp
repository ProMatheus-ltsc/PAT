/*
注意特殊边界条件，比如最后一个数后不能输出空格；可能直接输出整个数组；要保证M<N。
*/
#include<cstdio>
int main(){
	int a[110];
	int n, m, count = 0; //count记录已经输出数的个数
	scanf("%d%d",&n ,&m);
	m = m % n;//修正m
	for(int i = 0;i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = n - m;i < n;i++){//输出n-m号到n-1号
		printf("%d",a[i]);
		count++;//已输出的数的个数加1
		if(count  < n) printf(" ");//如果已经输出数的个数小于n，则输出空格
	}
	for(int i = 0;i < n - m;i++){
		printf("%d",a[i]);
		count++;
		if(count  < n) printf(" ");
	}
	return 0;
}
