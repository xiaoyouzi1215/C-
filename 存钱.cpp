#include<stdio.h>
int main(){
	float m,total,rest,x;
	int day;
	total=0; 
	printf("请输入目标金额：");
	scanf("%f",&x);
	do{
		printf("今日存入金额：");
		scanf("%f",&m);
		total+=m;
		rest=x-total;
		day++;
		if(rest<=0){
			break;
		}else{
			printf("距离目标%.2f\n元",rest);
		}
	}while(total<=x);
	printf("恭喜完成目标！累计%d天\n",day);
	return 0;
}
