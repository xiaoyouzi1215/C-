#include<stdio.h>
int main(){
	float m,total,rest,x;
	int day;
	total=0; 
	printf("������Ŀ���");
	scanf("%f",&x);
	do{
		printf("���մ����");
		scanf("%f",&m);
		total+=m;
		rest=x-total;
		day++;
		if(rest<=0){
			break;
		}else{
			printf("����Ŀ��%.2f\nԪ",rest);
		}
	}while(total<=x);
	printf("��ϲ���Ŀ�꣡�ۼ�%d��\n",day);
	return 0;
}
