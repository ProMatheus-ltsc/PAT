/*
关键在于利用结构体Student记录单个学生的姓名，学号，分数。字符数组的最后一位需要预留给'\0'，所以数组大小必须比题目要求的大小至少大一位。
*/
#include<cstdio>
struct Student{
	char name[15];
	char id[15];
	int score;
}temp, ans_max, ans_min;//temp存放临时变量，ans_max为最高分数的学生，ans_min为最低分数的学生
int main(){
	//freopen("d:\\test.txt","r",stdin);
	int n;
	scanf("%d", &n);
	ans_max.score = -1;
	ans_min.score =101;
	for(int i = 0;i < n;i++){
		scanf("%s%s%d",temp.name, temp.id, &temp.score);//char数组整个输入的情况不加&
		if(temp.score > ans_max.score) ans_max = temp;
		if(temp.score < ans_min.score) ans_min = temp;
	}
	printf("%s %s\n", ans_max.name, ans_max.id);
	printf("%s %s\n", ans_min.name, ans_min.id);
	return 0;
}