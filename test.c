#include<stdio.h>

int main()
{
	int num1, min, hour;
	printf("초입력 :", &num1);
	scanf("%d", &num1);
	min = num1/60;
	hour = min/60;


	printf("%d시간/%d분/%d초", hour, min, num1);
}
