#include<stdio.h>
#include<Windows.h>
#include<iostream>

using namespace std;

int main()
{
	int by,bm,bd,ny,nm,nd,A,B,C,X;
	printf("请输入出生，年，月，日，以‘，’隔开。\n");
	scanf("%d,%d,%d",&by,&bm,&bd);
	printf("请输入现在，年，月，日，以‘，’隔开。\n");
	scanf("%d,%d,%d",&ny,&nm,&nd);
	A=ny-by;
	if(nm>=bm) B=nm-bm;
	else B=bm-nm;
	C=(A-A%4)/4;
	X=365*A+B+C;
	double IQ,BQ,EQ;
	BQ=X/23;
	EQ=X/28;
	IQ=X/33;
	if(BQ>11.5)
		//BQ处理
		printf("您当前处于体力低潮期，未来一段时间体力持续低潮。\n");
	else if(BQ=11.5)
		printf("您当前处于体力临界期，未来一段时间体力容易下降。\n");
	else
		printf("您当前处于体力高潮期，未来一段时间体力较为充沛。\n");
	    //EQ处理
	if(EQ>14)
		printf("您当前处于情绪低潮期，未来一段时间情绪持续低潮。\n");
	else if(EQ=14)
		printf("您当前处于情绪临界期，未来一段时间情绪容易波动。\n");
	else
		printf("您当前处于情绪高潮期，未来一段时间情绪较为高涨。\n");
	    //IQ处理
	if(IQ>16.5)
		printf("您当前处于智力低潮期，未来一段时间智力持续下降。\n");
	else if(IQ=16.5)
		printf("您当前处于智力临界期，未来一段时间智力容易恍惚。\n");
	else
		printf("您当前处于智力高潮期，未来一段时间智力较为敏锐。\n");
	system("pause");
	return 0;


}