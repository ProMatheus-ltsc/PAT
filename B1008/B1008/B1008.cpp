/*
ע������߽��������������һ������������ո񣻿���ֱ������������飻Ҫ��֤M<N��
*/
#include<cstdio>
int main(){
	int a[110];
	int n, m, count = 0; //count��¼�Ѿ�������ĸ���
	scanf("%d%d",&n ,&m);
	m = m % n;//����m
	for(int i = 0;i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = n - m;i < n;i++){//���n-m�ŵ�n-1��
		printf("%d",a[i]);
		count++;//����������ĸ�����1
		if(count  < n) printf(" ");//����Ѿ�������ĸ���С��n��������ո�
	}
	for(int i = 0;i < n - m;i++){
		printf("%d",a[i]);
		count++;
		if(count  < n) printf(" ");
	}
	return 0;
}
