/*
ע�⵱A+B=0ʱ��Ҫ�������0��ע��ת��Ϊ�����ƺ����31λ����Ҫ31��С���顣
*/
#include<cstdio>
int main(){
	int a, b, d;
	scanf("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;//ans���D���Ƶ�ÿһλ
	do{//����ת��
		ans[num++] = sum % d;
		sum /= d;
	}while(sum != 0);
	for(int i = num -1;i >= 0;i--){//�Ӹ�λ����λ���
		printf("%d", ans[i]);
	}
	return 0;
}