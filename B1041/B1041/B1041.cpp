/*
关键在于使用结构体Student记录单个考生的准考证号和考试座位号，然后直接把试机座位号作为数组的下标。数据使用longlong保存。
*/
#include<cstdio>
const int maxn = 10;
struct Student{
	long long id;//准考证号
	int examSeat;//考试座位号
}testSeat[maxn];//以试机座位号作为下标来记录考生
int main(){
	//freopen("d:\\test.txt","r",stdin);
	int n, m, seat, examSeat;
	long long id;
	scanf("%d",&n);//考生人数
	for(int i = 0; i < n; i++){
		scanf("lld %d %d",&id, &seat, &examSeat);//准考证号，试机座位号，考试座位号
		testSeat[seat].id = id;//试机座位号为seat的考生的准考证号
		testSeat[seat].examSeat = examSeat;//试机座位号为seat的考生的考试号
	}
	scanf("%d",&m);//查询个数
	for(int i = 0; i < m; i++){
		scanf("%d", &seat);//欲查询的试机座位号，以此为下标直接查找学生
		printf("lld %d\n",testSeat[seat].id, testSeat[seat].examSeat);
	}
	return 0;
}