/*
注意当A+B=0时需要特判输出0，注意转换为二进制后最高31位，需要31大小数组。
*/
#include<cstdio>
int main(){
	int a, b, d;
	scanf("%d%d%d", &a, &b, &d);
	int sum = a + b;
	int ans[31], num = 0;//ans存放D进制的每一位
	do{//进制转换
		ans[num++] = sum % d;
		sum /= d;
	}while(sum != 0);
	for(int i = num -1;i >= 0;i--){//从高位到低位输出
		printf("%d", ans[i]);
	}
	return 0;
}