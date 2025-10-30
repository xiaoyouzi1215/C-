#include<stdio.h>
int total(int a){
	float result; 
	if(a<0){
		printf("请输入正数\n");
	}else{
		if(a<=50){
			result=a*0.53;
			printf("电费是%.2f\n",result);
		}else{
			result=50*0.53+(a-50)*0.58;
			printf("电费是%.2f\n",result);
		}
	}
	return result;
} 
int main(){
	int x;
	float y;
	printf("请输入用电量：");
	scanf("%d",&x);
	y=total(x);
	return 0;
}
