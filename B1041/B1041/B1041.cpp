/*
�ؼ�����ʹ�ýṹ��Student��¼����������׼��֤�źͿ�����λ�ţ�Ȼ��ֱ�Ӱ��Ի���λ����Ϊ������±ꡣ����ʹ��longlong���档
*/
#include<cstdio>
const int maxn = 10;
struct Student{
	long long id;//׼��֤��
	int examSeat;//������λ��
}testSeat[maxn];//���Ի���λ����Ϊ�±�����¼����
int main(){
	//freopen("d:\\test.txt","r",stdin);
	int n, m, seat, examSeat;
	long long id;
	scanf("%d",&n);//��������
	for(int i = 0; i < n; i++){
		scanf("lld %d %d",&id, &seat, &examSeat);//׼��֤�ţ��Ի���λ�ţ�������λ��
		testSeat[seat].id = id;//�Ի���λ��Ϊseat�Ŀ�����׼��֤��
		testSeat[seat].examSeat = examSeat;//�Ի���λ��Ϊseat�Ŀ����Ŀ��Ժ�
	}
	scanf("%d",&m);//��ѯ����
	for(int i = 0; i < m; i++){
		scanf("%d", &seat);//����ѯ���Ի���λ�ţ��Դ�Ϊ�±�ֱ�Ӳ���ѧ��
		printf("lld %d\n",testSeat[seat].id, testSeat[seat].examSeat);
	}
	return 0;
}