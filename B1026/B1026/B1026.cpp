/*
1. 四舍五入利用math.h头文件下的round函数，但是由于涉及浮点数使写法变得复杂，不妨直接根据后两位判断四舍五入，以避免浮点数运算。
2. 时分秒的输出要保证不足两位时高位用0补充
*/
#include<cstdio>
int main(){
	int c1, c2;
	scanf("%d%d",&c1, &c2);
	int ans = c2 -c1;
	if(ans % 100 >= 50){
		ans = ans / 100 + 1;
	}else{
		ans = ans / 100;
	}
	printf("%02d:%02d:%02d\n",ans /3600, ans % 3600 / 60,ans % 60);//日期转换的方法
	return 0;
}
