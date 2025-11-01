#include<stdio.h>
int main(){
	int head,leg,i;
	printf("请输入有几个头，几只脚：");
	scanf("%d %d",&head,&leg);
	for(i=0;i<=head;i++){
		printf("鸡有%d头\n",i);
		if((leg-i*2)%4==0){
			printf("兔有%d头",head-i);
			break;
		}else{
			printf("无解\n") ; 
			continue;
		}
	}
	return 0;
}
