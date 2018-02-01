/*
关键在于利用数组记录，由于是连续编号，可以使用数组。
*/
#include<cstdio>
const int maxn = 100010;
int school[maxn] = {0};//记录每个学校的总分
int main(){
	int n, schID, score;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d%d", &schID, &score);
		school[schID] += score;
	}
	int k = 1,MAX = -1;//最高总分的学校ID以及其总分
	for(int i = 1;i <= n;i++){
		if(school[i] > MAX){
			MAX = school[i];
			k = i;
		}
	}
	printf("%d %d\n", k, MAX);
	return 0;
}