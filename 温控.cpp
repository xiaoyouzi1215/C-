#include<stdio.h> 
int main(){
	int indoor_temp,humidity,time_period,season;
	printf("�����������¶ȣ�ʪ�ȣ�ʱ��Σ����ڣ�");
	scanf("%d %d %d %d",&indoor_temp,&humidity,&time_period,&season);
	if(indoor_temp>=30){
		printf("���ȣ������յ�\n");
	}else if(indoor_temp>=26){
		if(humidity>=80){
			printf("���ȣ������յ��ͳ�ʪģʽ\n");
		}else{
			printf("���ȣ������յ�\n");
		} 
	}else if(indoor_temp>=22) {
		if(season==2){
			printf("����ƫ�ߣ���������\n");
		}else{
			printf("����ƫ��\n");
		}
	}else if(indoor_temp>=18){
		printf("����\n"); 
	}else if(indoor_temp>=14) {
		if(season==4){
			printf("����ƫ�ͣ���������\n");
		}else{
			printf("����ƫ��\n");
		}
	}else if(indoor_temp>=10){
		if(time_period==2){
			printf("���䣬���鿪��ů��\n");
		}else{
			printf("����\n");
		}
	}else if(indoor_temp>=0){
		if(humidity>75){
			printf("ע�����\n");
		}else{
			printf("�Ϻ�\n");
		}
	} else{
		printf("������ǿ�ƿ���ǿ��ů����ע��ˮ�ܷ���\n"); 
	} 
	return 0; 
}
