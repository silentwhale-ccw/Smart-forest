#include<stdio.h>
#include<Windows.h>
#include<iostream>

using namespace std;

int main()
{
	int by,bm,bd,ny,nm,nd,A,B,C,X;
	printf("������������꣬�£��գ��ԡ�����������\n");
	scanf("%d,%d,%d",&by,&bm,&bd);
	printf("���������ڣ��꣬�£��գ��ԡ�����������\n");
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
		//BQ����
		printf("����ǰ���������ͳ��ڣ�δ��һ��ʱ�����������ͳ���\n");
	else if(BQ=11.5)
		printf("����ǰ���������ٽ��ڣ�δ��һ��ʱ�����������½���\n");
	else
		printf("����ǰ���������߳��ڣ�δ��һ��ʱ��������Ϊ���档\n");
	    //EQ����
	if(EQ>14)
		printf("����ǰ���������ͳ��ڣ�δ��һ��ʱ�����������ͳ���\n");
	else if(EQ=14)
		printf("����ǰ���������ٽ��ڣ�δ��һ��ʱ���������ײ�����\n");
	else
		printf("����ǰ���������߳��ڣ�δ��һ��ʱ��������Ϊ���ǡ�\n");
	    //IQ����
	if(IQ>16.5)
		printf("����ǰ���������ͳ��ڣ�δ��һ��ʱ�����������½���\n");
	else if(IQ=16.5)
		printf("����ǰ���������ٽ��ڣ�δ��һ��ʱ���������׻�㱡�\n");
	else
		printf("����ǰ���������߳��ڣ�δ��һ��ʱ��������Ϊ����\n");
	system("pause");
	return 0;


}