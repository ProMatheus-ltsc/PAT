/*
�ؼ��������ýṹ��Student��¼����ѧ����������ѧ�ţ��������ַ���������һλ��ҪԤ����'\0'�����������С�������ĿҪ��Ĵ�С���ٴ�һλ��
*/
#include<cstdio>
struct Student{
	char name[15];
	char id[15];
	int score;
}temp, ans_max, ans_min;//temp�����ʱ������ans_maxΪ��߷�����ѧ����ans_minΪ��ͷ�����ѧ��
int main(){
	//freopen("d:\\test.txt","r",stdin);
	int n;
	scanf("%d", &n);
	ans_max.score = -1;
	ans_min.score =101;
	for(int i = 0;i < n;i++){
		scanf("%s%s%d",temp.name, temp.id, &temp.score);//char��������������������&
		if(temp.score > ans_max.score) ans_max = temp;
		if(temp.score < ans_min.score) ans_min = temp;
	}
	printf("%s %s\n", ans_max.name, ans_max.id);
	printf("%s %s\n", ans_min.name, ans_min.id);
	return 0;
}