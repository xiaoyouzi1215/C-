#include<stdio.h>
int main(){
	double yuan,mei,ou;
	double meiyuan(double x);
	double ouyuan(double y);
	printf("请输入人民币：");
	scanf("%lf",&yuan);
	mei=meiyuan(yuan);
	ou=ouyuan(yuan);
	return 0;
}
double meiyuan(double x){
	double p=x*0.1408;
	printf("换算成美元为%.2f\n",p);
	return p;
}
double ouyuan(double y){
	double q=y*0.1211;
	printf("换算成欧元为%.2f\n",q);
	return q;
}
