/*  1. �����ܺ�����,ע��:
		1.1��ms��Ϊs 
		1.2��������< pow(10,18),����Ӧʹ��long 
	2.�ȼ�������죨û��һ���죩��ʱ�������������� %(60*60*24) 
	3.���㵱���ʱ���֡���
	4. ��ʱ���֡�����һ�Ǹ�λ���֣��������⴦��
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
