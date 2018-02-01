/*
1. д�����ȽϺ���LessEqu(person a,person b)��MoreEqu(person a,person b),�����Ƚ�a��b�����ڣ����У���a������С�ڵ���b������ʱLessEqu����true������a�����ڴ��ڵ���b������ʱMoreEqu����true��
2. ���ܴ��������˵����ڶ����ںϷ�������������ʱ�����������0���������Ϊ���������ո�����ء���ʽ���󡱡�
3. ���������������С����ʱ���п���ͬʱ����������ں���С���ڣ���˲���ʹ��if...else��д����ѡ������һ�����¡�
4. ���ڱȽϺ���ֻдһ����д���ᵼ�±߽����ڵĴ���������⡣
*/
#include<cstdio>
struct person{
	char name[10];
	int yy, mm, dd;
}oldest, youngest, left, right, temp;//left��right��źϷ����ڵ����ұ߽�
bool LessEqu(person a, person b){//���a������С�ڵ���b������true
	if(a.yy != b.yy) return a.yy <= b.yy;
	else if(a.mm != b.mm) return a.mm <= b.mm;
	else return a.dd <= b.dd;
}
bool MoreEqu(person a, person b){//���a�����ڴ��ڵ���b������true
	if(a.yy != b.yy) return a.yy >= b.yy;
	else if(a.mm != b.mm) return a.mm >= b.mm;
	else return a.dd >= b.dd;
}
//youngest��leftΪ1814��9��6�գ�oldest��rightΪ2014��9��6��
void init(){
	youngest.yy = left.yy = 1814;
	oldest.yy = right.yy = 2014;
	youngest.mm = oldest.mm = left.mm = right.mm = 9;
	youngest.dd = oldest.dd = left.dd = right.dd = 6;
}
int main(){
	init();
	freopen("d://test.txt","r",stdin);
	int n, num = 0;//num��źϷ����ڵ�����
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
		if(MoreEqu(temp, left) && LessEqu(temp, right)){//���ںϷ�
			num++;
			if(LessEqu(temp, oldest)) oldest = temp;
			if(MoreEqu(temp, youngest)) youngest = temp;
		}
	}
	if(num == 0) printf("0\n");//�����˵����ڶ����Ϸ���ֻ���0
	else printf("%d %s %s\n", num, oldest.name, youngest.name);		
	return 0;
}