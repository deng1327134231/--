#include <iostream>
#include <graphics.h>
#include <stdio.h>
#include <Windows.h>

using namespace std;
int score=0;//����
int rand1=0;//�ȼ�
void creactWindows(void){
	//��������
	initgraph(550,660);
	//���ô�������
	HWND windows=GetHWnd();
	SetWindowText(windows,_T("����˹����"));
	//���ô�������
	settextcolor(WHITE);
	settextstyle(40,0,_T("����"));
	outtextxy(175,200,_T("����˹����"));


	settextstyle(40,0,_T("΢���ź�"));
	outtextxy(135,300,_T("���,�Ӷ���˹���鿪ʼ"));

	Sleep(4000);
}

void initGameScreen(void){
	char str[16];
	//�����Ļ
	cleardevice();

	//����
	rectangle(27,27,336,635);
	rectangle(29,29,334,636);

	rectangle(370,50,515,195);

	settextcolor(WHITE);
	settextstyle(24,0,_T("����"));
	outtextxy(405,215,_T("��һ��:"));

	//�������
	settextcolor(RED);
	outtextxy(405,280,_T("����:"));
	sprintf(str,"%d",score);
	outtextxy(415,310,str);
	//����÷�
	
	outtextxy(405,375,_T("�ȼ�:"));
	sprintf(str,"%d", rand1);
	outtextxy(415,405,str);
	//����˵����������
	settextcolor(BLUE);
	outtextxy(390,475,_T("����˵��"));
	outtextxy(390,500,_T("��:��ת"));
	outtextxy(390,525,_T("��:�½�"));
	outtextxy(390,550,_T("��:����"));
	outtextxy(390,575,_T("��:����"));

}
int main(void){
	//��ʼ��
	creactWindows();
	//��������Ϸ����
	initGameScreen();


	//������Ϸ����


	system("pause");   // ��ͣ��Ϸ

	//�رջ���
	closegraph();
	return 0;
}