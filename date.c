/*  
	#显示时间
	1. 输入总毫秒数,注意:
		1.1将ms化为s 
		1.2输入数据< pow(10,18),所以应使用long 
	2.先计算出当天（没到一整天）的时间秒数：总秒数 %(60*60*24) 
	3.计算当天的时、分、秒
	4. 若时、分、秒任一是个位数字，作出额外处理
*/ 
#include<stdio.h>
int main(){
	long totalms,currentSeconds;
	int hour,munite,seconds,date[6]={0};
	scanf("%ld",&totalms);
	currentSeconds = (totalms/1000) % (60*60*24);
	hour = currentSeconds / (60*60);
	munite = currentSeconds % 3600 / 60;
	seconds = currentSeconds % 60;
	
	date[0]=hour /10;
	date[1]=hour %10;
	date[2]=munite /10;
	date[3]=munite %10;
	date[4] = seconds /10;
	date[5] = seconds %10;
	for(int i=1;i<=6;i++){
		printf("%d",date[i-1]);
	if(i%2==0&&i!=6) printf(":");
	}
}
