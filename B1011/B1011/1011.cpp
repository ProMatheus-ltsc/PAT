/*
�ؼ���ע����������Ѿ�����int��Χ
*/
#include<cstdio>
int main(){
	int T, tcase = 1;
	scanf("%d",&T);
	while(T--){
		long long a,b,c;
		scanf("%lld%lld%lld", &a, &b, &c);
		if(a + b > c){
			printf("Case #%d: ture\n", tcase++);
		}else{
			printf("Case #%d: false\n", tcase++);
		}
	}
	return 0;
}