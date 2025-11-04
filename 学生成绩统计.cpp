#include<stdio.h>
int main(){
	int i,j;
	float grade[3][3],total,pingjun;
	for(i=0;i<3;i++){
		total=0.0;
	    pingjun=0.0;
		printf("第%d个学生\n",i+1);
		for(j=0;j<3;j++){
			printf("%s成绩：",(j==0)?"语文":(j==1)?"数学":"英语");
			scanf("%f",&grade[i][j]);
			if((grade[i][j]<0)||(grade[i][j]>150)){
				printf("报错！请输入0到150之间的数字\n");
				printf("%s成绩：",(j==0)?"语文":(j==1)?"数学":"英语");
			    scanf("%f",&grade[i][j]);
			}
			total+=grade[i][j];
		}
		pingjun=total/3;
		printf("第%d个学生成绩的平均值%.2f\n",i+1,pingjun);
	}
	for(i=0;i<3;i++){
		printf("第%d个学生\n",i+1);
		for(j=0;j<3;j++){
			printf("%.1f ",grade[i][j]);
		}
	}
	return 0; 
}
