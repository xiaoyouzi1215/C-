#include<stdio.h>
int main(){
	int head,leg,i;
	printf("�������м���ͷ����ֻ�ţ�");
	scanf("%d %d",&head,&leg);
	for(i=0;i<=head;i++){
		printf("����%dͷ\n",i);
		if((leg-i*2)%4==0){
			printf("����%dͷ",head-i);
			break;
		}else{
			printf("�޽�\n") ; 
			continue;
		}
	}
	return 0;
}
