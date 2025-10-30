#include<stdio.h> 
int main(){
	int indoor_temp,humidity,time_period,season;
	printf("请输入室内温度，湿度，时间段，季节：");
	scanf("%d %d %d %d",&indoor_temp,&humidity,&time_period,&season);
	if(indoor_temp>=30){
		printf("酷热，开启空调\n");
	}else if(indoor_temp>=26){
		if(humidity>=80){
			printf("炎热，开启空调和除湿模式\n");
		}else{
			printf("炎热，开启空调\n");
		} 
	}else if(indoor_temp>=22) {
		if(season==2){
			printf("舒适偏高，开启风扇\n");
		}else{
			printf("舒适偏高\n");
		}
	}else if(indoor_temp>=18){
		printf("舒适\n"); 
	}else if(indoor_temp>=14) {
		if(season==4){
			printf("舒适偏低，开启风扇\n");
		}else{
			printf("舒适偏低\n");
		}
	}else if(indoor_temp>=10){
		if(time_period==2){
			printf("寒冷，建议开启暖气\n");
		}else{
			printf("寒冷\n");
		}
	}else if(indoor_temp>=0){
		if(humidity>75){
			printf("注意防潮\n");
		}else{
			printf("严寒\n");
		}
	} else{
		printf("极寒，强制开启强力暖气，注意水管防冻\n"); 
	} 
	return 0; 
}
