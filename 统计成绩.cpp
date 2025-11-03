#include<stdio.h>
int main(){
	char name[20];
	int age,n,i;
	float great,total,pingjun;
	printf("学生数量：");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
	    printf("请输入名字：");
	    scanf("%s",&name);
	    printf("请输入年龄，成绩：");
	    scanf("%d %f",&age,&great);
	    printf("等级为%s\n",(great>=90)?"A":(great>=80)?"B":(great>=70)?"C":(great>=60)?"D":"E");
	    total+=great;
	}
	pingjun=total/n;
	printf("平均值为%.2f\n",pingjun);
	return 0; 
}
