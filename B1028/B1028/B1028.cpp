/*
1. 写两个比较函数LessEqu(person a,person b)与MoreEqu(person a,person b),用来比较a与b的日期，其中，当a的日期小于等于b的日期时LessEqu返回true，而当a的日期大于等于b的日期时MoreEqu返回true。
2. 可能存在所有人的日期都不在合法区间的情况，这时必须特判输出0，否则会因为后面多输出空格而返回“格式错误”。
3. 更新最大日期与最小日期时，有可能同时更新最大日期和最小日期，因此不能使用if...else的写法来选择其中一个更新。
4. 日期比较函数只写一个的写法会导致边界日期的处理出现问题。
*/
#include<cstdio>
struct person{
	char name[10];
	int yy, mm, dd;
}oldest, youngest, left, right, temp;//left和right存放合法日期的左右边界
bool LessEqu(person a, person b){//如果a的日期小于等于b，返回true
	if(a.yy != b.yy) return a.yy <= b.yy;
	else if(a.mm != b.mm) return a.mm <= b.mm;
	else return a.dd <= b.dd;
}
bool MoreEqu(person a, person b){//如果a的日期大于等于b，返回true
	if(a.yy != b.yy) return a.yy >= b.yy;
	else if(a.mm != b.mm) return a.mm >= b.mm;
	else return a.dd >= b.dd;
}
//youngest与left为1814年9月6日，oldest与right为2014年9月6日
void init(){
	youngest.yy = left.yy = 1814;
	oldest.yy = right.yy = 2014;
	youngest.mm = oldest.mm = left.mm = right.mm = 9;
	youngest.dd = oldest.dd = left.dd = right.dd = 6;
}
int main(){
	init();
	freopen("d://test.txt","r",stdin);
	int n, num = 0;//num存放合法日期的人数
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
		if(MoreEqu(temp, left) && LessEqu(temp, right)){//日期合法
			num++;
			if(LessEqu(temp, oldest)) oldest = temp;
			if(MoreEqu(temp, youngest)) youngest = temp;
		}
	}
	if(num == 0) printf("0\n");//所有人的日期都不合法，只输出0
	else printf("%d %s %s\n", num, oldest.name, youngest.name);		
	return 0;
}