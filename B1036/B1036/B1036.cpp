/*

*/
#include<cstdio>
int main(){
	int row,col;
	char c;
	scanf("%d %c", &col, &c);
	if(col % 2 == 1) row = col / 2 + 1;
	else row = col / 2;
	for(int i = 0;i < col;i++){
		printf("%c", c);
	}
	printf("\n");
	for(int i = 2;i <  row;i++){//��2~row-1��
		printf("%c",c);//ÿ�еĵ�һ��a
		for(int j = 0;j < col - 2;j++){
			printf(" ");//col-2���ո�
		}
		printf("%c\n", c);//ÿ�е����һ��a
	}
	for(int i = 0;i < col;i++){
		printf("%c", c);
	}
	return 0;
}