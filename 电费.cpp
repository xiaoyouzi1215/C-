#include<stdio.h>
int total(int a){
	float result; 
	if(a<0){
		printf("����������\n");
	}else{
		if(a<=50){
			result=a*0.53;
			printf("�����%.2f\n",result);
		}else{
			result=50*0.53+(a-50)*0.58;
			printf("�����%.2f\n",result);
		}
	}
	return result;
} 
int main(){
	int x;
	float y;
	printf("�������õ�����");
	scanf("%d",&x);
	y=total(x);
	return 0;
}
